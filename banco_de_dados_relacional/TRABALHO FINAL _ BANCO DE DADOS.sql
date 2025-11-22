-- INSTRUÇÃO 1 

CREATE DATABASE BD_TrabalhoFinal

USE BD_TrabalhoFinal

CREATE TABLE ALUNOS (
	RA int NOT NULL IDENTITY,
	NOME varchar(100),
	CIDADE varchar(40)
	CONSTRAINT PK_ALUNOS PRIMARY KEY (RA)
);

CREATE TABLE DISCIPLINA (
	codigodisciplina int not null identity,
	disciplina varchar(100),
	cargahoraria float,
	CONSTRAINT PK_DISCIPLINA PRIMARY KEY (codigodisciplina)
);

CREATE TABLE PROFESSOR (
	codigoprofessor int not null identity,
	nome varchar(100),
	cidade varchar(40),
	CONSTRAINT PK_PROFESSOR PRIMARY KEY (codigoprofessor)
);

CREATE TABLE HISTORICO (
	codigohistorico int not null identity,
	ra int,
	codigodisciplina int,
	codigoprofessor int,
	semestre int,
	faltas int,
	nota float,
	CONSTRAINT PK_HISTORICO PRIMARY KEY (codigohistorico),
	CONSTRAINT FK_HISTORICO_ALUNOS FOREIGN KEY (ra)
		REFERENCES ALUNOS (RA),
	CONSTRAINT FK_HISTORICO_DISCIPLINA FOREIGN KEY (codigodisciplina)
		REFERENCES DISCIPLINA (codigodisciplina),
	CONSTRAINT FK_HISTORICO_PROFESSOR FOREIGN KEY (codigoprofessor)
		REFERENCES PROFESSOR (codigoprofessor)
);

SELECT *FROM ALUNOS;
SELECT *FROM DISCIPLINA;
SELECT *FROM PROFESSOR;
SELECT *FROM HISTORICO;

-- INSTRUCAO 2

-- TABELA ALUNOS

INSERT into ALUNOS (NOME,CIDADE) VALUES
('Alex Silva', 'Mogi Guacu'),
('Beatriz Almeida', 'Itapira'),
('Carlos Mendes', 'Estiva Gerbi'),
('Daniela Souza', 'Mogi Mirim'),
('Eduardo Ramos', 'Mogi Mirim'),
('Fernanda Costa', 'Mogi Guacu'),
('Gabriel Santos', 'Itapira'),
('Helena Rodrigues', 'Mogi Mirim'),
('Igor Pereira', 'Mogi Guacu'),
('Jose da Silva', 'Estiva Gerbi');

-- TABELA PROFESSOR

INSERT into PROFESSOR (nome,cidade) VALUES
('Sandro Oliveira','Mogi Mirim'),
('Marcos Lima', 'Mogi Guacu'),
('Patricia Souza','Itapira');

-- TABELA DISCIPLINA

INSERT into DISCIPLINA(disciplina,cargahoraria) VALUES
('Banco de Dados', '80'),
('Sistemas Operacionais', '60'),
('Redes de Computadores', '70'),
('Estrutura de Dados', '60');

INSERT INTO HISTORICO (ra, codigodisciplina, codigoprofessor, semestre, faltas, nota)
VALUES
(1, 1, 1, 1, 2, 8.5),
(2, 1, 1, 1, 3, 4.0),
(3, 2, 2, 2, 5, 6.5),
(4, 3, 3, 2, 1, 9.0),
(5, 4, 1, 1, 0, 7.5),
(6, 2, 2, 2, 4, 5.5),
(7, 1, 1, 1, 2, 9.0),
(8, 3, 3, 1, 1, 6.0),
(9, 4, 1, 2, 3, 8.0),
(10, 2, 2, 1, 2, 4.5),
(1, 3, 3, 2, 1, 7.0),
(2, 4, 1, 1, 3, 9.5),
(3, 1, 1, 2, 4, 3.5),
(4, 2, 2, 1, 0, 8.0),
(5, 3, 3, 2, 1, 6.5);

--INSTRUCAO 3

SELECT
	A.RA,
	A.NOME	
FROM HISTORICO H
JOIN ALUNOS A ON H.ra = A.RA
JOIN DISCIPLINA D ON H.codigodisciplina = D.codigodisciplina
WHERE 
	D.codigodisciplina = 1 --CODIGO DE BANCO DE DADOS
	AND H.semestre = 2
	AND H.nota < 5;

-- INSTRUCAO 4

ALTER TABLE HISTORICO
ADD ano int;

-- INSTRUCAO 5

UPDATE HISTORICO
SET ano = CASE codigohistorico
    WHEN 1 THEN 2019
    WHEN 2 THEN 2020
    WHEN 3 THEN 2020
    WHEN 4 THEN 2021
    WHEN 5 THEN 2021
    WHEN 6 THEN 2022
    WHEN 7 THEN 2022
    WHEN 8 THEN 2023
    WHEN 9 THEN 2023
    WHEN 10 THEN 2024
    WHEN 11 THEN 2024
    WHEN 12 THEN 2024
    WHEN 13 THEN 2020
    WHEN 14 THEN 2021
    WHEN 15 THEN 2022
END;

-- INSTRUCAO 6


SELECT --DISTINCT
	P.nome
FROM HISTORICO H
JOIN PROFESSOR P ON H.codigoprofessor = P.codigoprofessor
JOIN DISCIPLINA D ON H.codigodisciplina = D.codigodisciplina
WHERE 
	H.ano = 2020
	AND D.disciplina = 'Banco de Dados';

-- INSTRUCAO 7

SELECT 
    P.nome AS nome_professor,
    D.disciplina AS nome_disciplina,
    COUNT(D.codigodisciplina) 
FROM HISTORICO H
JOIN PROFESSOR P ON H.codigoprofessor = P.codigoprofessor
JOIN DISCIPLINA D ON H.codigodisciplina = D.codigodisciplina
WHERE H.ano = 2020
GROUP BY P.nome, D.disciplina
ORDER BY P.nome, D.disciplina;

--INSTRUCAO 8

SELECT
	A.NOME,
	A.CIDADE,
	D.codigodisciplina,
	D.disciplina
FROM HISTORICO H
JOIN ALUNOS A ON H.ra = A.RA
JOIN DISCIPLINA D ON H.codigodisciplina = D.codigodisciplina
WHERE 
	H.nota < 5
	AND H.semestre = 1
	AND H.ano = 2020;

-- INSTRUCÃO 9

SELECT
	A.RA,
	A.NOME
FROM HISTORICO H
JOIN ALUNOS A ON H.ra = A.RA
JOIN DISCIPLINA D ON H.codigodisciplina = D.codigodisciplina
JOIN PROFESSOR P ON H.codigoprofessor = P.codigoprofessor
WHERE 
	D.disciplina = 'Banco de Dados'
	and P.nome = 'Sandro Oliveira';

-- INSTRUCAO 9

SELECT
	A.RA,
	A.NOME,
	D.disciplina,
	H.faltas,
	H.nota,
	H.ano,
	H.semestre
FROM HISTORICO H
JOIN ALUNOS A ON H.ra = A.RA
JOIN DISCIPLINA D ON H.codigodisciplina = D.codigodisciplina
WHERE
	A.NOME = 'Alex Silva'

-- INSTRUCAO 10

SELECT
	P.nome
FROM PROFESSOR P
WHERE 
	P.cidade = 'Mogi Mirim'

-- INSTRUCAO 11

SELECT
	A.NOME,
	D.disciplina,
	P.nome
FROM HISTORICO H
JOIN ALUNOS A ON H.ra = A.RA
JOIN DISCIPLINA D ON H.codigodisciplina = D.codigodisciplina
JOIN PROFESSOR P ON H.codigoprofessor = P.codigoprofessor
WHERE 
	D.cargahoraria < 80

-- instrução 13
SELECT
	p.nome
FROM HISTORICO H
JOIN ALUNOS A ON H.ra = A.RA
JOIN PROFESSOR P ON H.codigoprofessor = P.codigoprofessor
WHERE
	H.nota < 5
	and A.nome = 'Beatriz Almeida';

-- instrução 14

SELECT
	A.RA,
	A.NOME
FROM HISTORICO H
JOIN ALUNOS A ON H.ra = A.RA
JOIN PROFESSOR P ON H.codigoprofessor = P.codigoprofessor
WHERE
	P.nome = 'Sandro Oliveira'

-- instrucao 15

SELECT 
    A.RA,
    A.NOME,
    AVG(H.nota) AS media_notas
FROM HISTORICO H
JOIN ALUNOS A ON H.ra = A.RA
JOIN PROFESSOR P ON H.codigoprofessor = P.codigoprofessor
WHERE 
    P.cidade = 'Mogi Mirim'
GROUP BY 
    A.RA,
    A.NOME
HAVING 
    COUNT(DISTINCT H.codigodisciplina) = (
        SELECT COUNT(DISTINCT H2.codigodisciplina)
        FROM HISTORICO H2
        JOIN PROFESSOR P2 ON H2.codigoprofessor = P2.codigoprofessor
        WHERE P2.cidade = 'Mogi Mirim'
    );

-- instrução 16

SELECT 
    COUNT(DISTINCT H.ra) AS quantidade_alunos
FROM HISTORICO H
JOIN DISCIPLINA D ON H.codigodisciplina = D.codigodisciplina
WHERE
    D.disciplina = 'Banco de Dados'
    AND H.ano = 2020
    AND H.semestre = 1;

-- INSTRUÇÃO 17

SELECT 
    D.disciplina,
    AVG(H.nota) AS media_notas
FROM HISTORICO H
JOIN DISCIPLINA D 
    ON H.codigodisciplina = D.codigodisciplina
GROUP BY 
    D.disciplina
ORDER BY 
    media_notas DESC;

-- INSTRUCAO 18 

SELECT
	A.NOME,
	A.CIDADE,
	D.codigodisciplina,
	D.disciplina
FROM HISTORICO H
JOIN ALUNOS A ON H.ra = A.RA
JOIN DISCIPLINA D ON H.codigodisciplina = D.codigodisciplina
WHERE H.nota > 5 
	AND H.semestre = '1'
	AND H.ano = '2020'
ORDER BY
	D.disciplina; 

-- instrucao 19

SELECT
	A.RA,
	A.NOME,
	D.disciplina,
	D.codigodisciplina,
	H.faltas,
	H.nota,
	H.ano,
	H.semestre
FROM HISTORICO H
JOIN ALUNOS A ON H.RA = A.RA
JOIN DISCIPLINA D ON H.codigodisciplina = D.codigodisciplina
WHERE
	A.NOME = 'Alex Silva'

-- INSTRUÇÃO 20

SELECT 
	COUNT (*) AS qntd_curso
FROM HISTORICO H
JOIN ALUNOS A ON H.RA = A.RA
JOIN DISCIPLINA D ON H.codigodisciplina = D.codigodisciplina
WHERE 
	A.NOME = 'Jose da Silva'
	AND D.disciplina = 'Banco de Dados';

-- INSTRUCAO 21

SELECT 
	COUNT (DISTINCT A.RA) AS qntd_alunos
FROM HISTORICO H
JOIN ALUNOS A ON H.RA = A.RA
JOIN DISCIPLINA D ON H.codigodisciplina = D.codigodisciplina
WHERE 
	D.disciplina = 'Banco de Dados'
	and H.ano in (2019,2020);

-- INSTRUCAO 22 

-- INSIRIR NOVA DISCIPLINA
INSERT INTO DISCIPLINA (disciplina, cargahoraria)
VALUES ('Tópicos de Banco de Dados', 90);

INSERT INTO HISTORICO (ra,codigodisciplina,codigoprofessor, faltas, nota, ano, semestre)
SELECT
	H.ra,
	(SELECT codigodisciplina
	FROM DISCIPLINA
	WHERE DISCIPLINA = 'Tópicos de Banco de Dados'),
	H.codigoprofessor,
	Null,
	Null,
	2018,
	1
FROM HISTORICO H
JOIN DISCIPLINA D ON H.codigodisciplina = D.codigodisciplina
WHERE 
	D.disciplina = 'Banco de Dados'
	and H.nota > 5
	AND H.ano = '2019';

select *from HISTORICO