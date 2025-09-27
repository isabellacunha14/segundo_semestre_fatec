create database FatecBdR_2Sem2025

use FatecBdR_2Sem2025
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

select * from departamento
select * from funcionario
select * from venda

insert into venda values ('papel sulfite',10,5,50,5,2.5,47.5,104),
('tesoura',3,4,12,10,1.2,10.8,106),
('caneta bic',20,5,100,20,20,80,104),
('apontador',2,8,16,10,1.6,14.4,102),
('lapis', 3, 4, 12, 10, 1.2, 10.8, 106),
('caneta', 5, 2, 10, 5, 0.5, 9.5, 101),
('borracha', 2, 3, 6, 15, 0.9, 5.1, 104),
   ('caderno', 20, 1, 20, 20, 4.0, 16.0, 100),
   ('marca-texto', 7, 2, 14, 10, 1.4, 12.6, 105),
   ('regua', 4, 1, 4, 5, 0.2, 3.8, 102),
       ('mochila', 120, 1, 120, 25, 30.0, 90.0, 103)

insert into venda values ('porta-lápis',10,1,10,5,0.5,9.5,null)

update venda set produto = 'cola branca 92g' where codigovenda=13

delete from venda where codigovenda = 18

/* sintaxe do comando select para pesquisar no BD
SELECT campos separado por virgula, funcoes, subselect, *
FROM tabela(s) sep virgula e relacionamento entre tabelas
WHERE filtro, subselects, relacionar tabelas em igualdade
GROUP BY campos sep virgulas que seja necessario agrupar dados
ORDER BY campos sep virgulas para ordenar dados
*/
--apresentando o nome dos funcionarios e alterando o nome da coluna
select 'fatec' as 'teste'
select nome as 'Nome do Funcionario'
from funcionario

-- apresentar o nome e salario dos funcionarios
-- em ordem crescente por nome
select nome, salario
from funcionario
order by nome
-- asc = crescente desc = decrescente

select funcionario.nome, funcionario.salario
from funcionario
order by funcionario.nome

select f.nome, f.salario, nome
from funcionario f, venda
order by f.nome

select f.nome, f.salario
from funcionario f
order by f.salario desc

select top 3 f.nome, f.salario
from funcionario f
order by f.salario desc

select top 2 f.nome
from funcionario f
order by f.salario


select f.nome, f.salario
from funcionario f
where f.salario < 3000 -- > < <= >= = <> --
order by f.nome

select f.nome, f.salario
from funcionario f
where f.nome = 'maria'


select f.nome, f.salario
from funcionario f
where f.nome like 'j%' -- pega a primeira letra e demonstra
where f.nome like '%silva' -- pega todos os nomes que terminam com silva
where f.nome like '%silva%' -- aparece qualquer um que tenha silva no nome

select f.nome
from funcionario f
where f.salario > 2000 and f.salario < 3800
order by f.nome

-- selecionar quais produtos foram vendidos
select produto
from venda
group by produto
order by produto

-- selecionar produto, quantidade vendida e o valor unitario
-- em ordem crescente de quantidade vendida
select ve.produto, ve.qtd, ve.valorunitario
from venda ve
order by ve.qtd desc

/* EXERCICIO
1. Apresentar o nome dos departamentos por ordem crescente
de nome de departamento
2. Apresentar o nome do funcionario, seu salario apenas para
os funcionairos que tem iniciado com A e salario
entre 1000 e 4000 ordenados por salario decrescente
3. Apresentar o produto vendido, quantidade de vendas, valor
total pago pela compra e codigo funcionario que vendeu
apresentar esse resultado em ordem crescente de produto
4. Apresentar o nome do produto, valor unitario em ordem de
valor unitario decrescente.
5. Qual o funcionario que tem o maior salario?
6. Qual o produto que tem o valor unitario maior
7. Qual o produto que mais vendeu?
*/

select departamento
from departamento
order by departamento

insert into funcionario (nome,salario) values ('Ana', 2200)

select f.nome, f.salario
from funcionario f
where f.nome like 'a%' and f.salario > 1000 and f.salario <4000

select v.produto, v.qtd, v.totalpagar, v.matricula
from venda v
order by produto

select v.produto, v.valorunitario
from venda v
order by valorunitario desc

select top 1 f.nome, f.salario
from funcionario f
order by f.salario desc

select top 1 v.valorunitario, v.produto
from venda v
order by v.valorunitario desc

select top 1 v.qtd, v.produto
from venda v
order by v.qtd desc
