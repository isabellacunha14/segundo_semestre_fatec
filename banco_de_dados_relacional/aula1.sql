create database Aula_banco_1

use Aula_banco_1
-- comentarios gerais
/* comentarios
linhas */

/* CRIAR TABELA
create table <nome> (campo1 tipo, campo2 tipo, campo3 tipo)
*/
create table departamento (codigodepto int not null, departamento varchar(20))
-- not null quer dizer que nao pode ser nula a entrada (tem que ter entrada)

-- declarando a chave primaria
alter table departamento add constraint pk_departamento primary key (codigodepto)

-- mostra a tabela
select * from departamento

-- inserir dados na tabela (uma linha)
insert into departamento (codigodepto, departamento) values (1, 'TI')

-- inserir mais de um dado na tabela (mais que uma linha em um comando)
insert into departamento values (2,'Engenharia'),
(3,'Fiscal'),
(4, 'Administrativo'),
(5, 'Diretoria'),
(6,'Gestão Pessoas'),
(7, 'Frotas')

insert into departamento values (3, 'Manutenção') -- nao funciona pois duplica a chave primaria

insert into departamento values (8, 'Manutenção') -- nova inserção de dado na tabela

insert into departamento values (9, 'Produção') -- nova inserção de dado na tabela

-- alterar o campo
update departamento set departamento = 'Produções' where codigodepto = 9

-- deletar a linha
delete from departamento where codigodepto = 9

-- criar tabela com a declaração da chave primaria
create table funcionario (matricula int not null identity(100,1),
 nome varchar(30), salario float,
 codigodepartamento int,
 constraint pk_funcionario primary key(matricula))

select * from funcionario

--declarar qual a chave secundaria
alter table funcionario add constraint fk_dept_func
foreign key (codigodepartamento)
references departamento (codigodepto)

select * from departamento
select * from funcionario

insert into funcionario values ('João', 1600, 1), ('Maria', 2100, 2),
('Pedro', 3400, 3), ('Jose', 4670,1),
('Lucas', 7322.50, 5), ('Ze', 1400, 5),
('Isabella', 3500, 6), ('Carla', 2899, 2)

-- esse comando apresenta resultado de conflito de foreign key
-- pois o codigo 99 nao existe na tabela relacionada
insert into funcionario values ('Eduardo', 5600, 99)

insert into funcionario (nome, salario) values ('Eduardo', 5600)

insert into funcionario (nome,salario) values ('Paula', 4200)

update funcionario set codigodepartamento = 4 where matricula = 110


create table venda (codigovenda int not null identity (1,1), produto varchar(20),
valorunitario float, qtd int, total float, desconto float,
valordesconto float, totalpagar float, matricula int,
constraint pk_venda primary key (codigovenda),
constraint fk_func_vend foreign key (matricula)
references funcionario (matricula))

select * from venda

insert into venda values ('caneta',5,2,10,5,0.5,9.5,102)

/*EXERCICIO

1. Cadastrar 10 vendas
2. Cadastrar 2 vendas sem definir funcionario, campo null
3. Alterar um dos registro corrigindo o nome do produto
4. Deletar uma das vendas
5. Selecionar os registros

*/