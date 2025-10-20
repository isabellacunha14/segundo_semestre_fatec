CREATE DATABASE aula_02_10_2;
GO

USE aula_02_10_2;
GO

CREATE TABLE CIDADE 
( 
 cod INT PRIMARY KEY,  
 nome VARCHAR(100),  
 estado VARCHAR(50),  
 populacao INT NOT NULL,  
 area_territorial FLOAT  
); 

CREATE TABLE BAIRRO 
( 
 cod_bairro INT PRIMARY KEY,  
 nome VARCHAR(100),  
 idCidade INT  
); 

CREATE TABLE EVENTO_URBANO 
( 
 cod_evento INT PRIMARY KEY,  
 nome VARCHAR(100),  
 tipo VARCHAR(50),  
 data_inicio DATE,  
 data_termino DATE,  
 localizacao VARCHAR(150),  
 idBairro INT  
); 

CREATE TABLE EQUIPAMENTO_PUBLICO 
( 
 cod_equipamento INT PRIMARY KEY,  
 nome VARCHAR(100),  
 tipo VARCHAR(50),  
 endereco VARCHAR(150),  
 idBairro INT  
); 

CREATE TABLE SERVICO_MUNICIPAL 
( 
 cod_servico INT PRIMARY KEY,  
 nome VARCHAR(100),  
 area VARCHAR(50),  
 responsavel_tecnico VARCHAR(100),  
 idCidade INT  
); 

CREATE TABLE INDICADOR_DE_GESTAO 
( 
 cod_indicador INT PRIMARY KEY,  
 nome VARCHAR(100),  
 descricao VARCHAR(200),  
 unidade_medida VARCHAR(50),  
 valor FLOAT,  
 data_coleta DATE,  
 idCidade INT  
); 

-- CHAVES ESTRANGEIRAS
ALTER TABLE BAIRRO ADD FOREIGN KEY(idCidade) REFERENCES CIDADE(cod);
ALTER TABLE EVENTO_URBANO ADD FOREIGN KEY(idBairro) REFERENCES BAIRRO(cod_bairro);
ALTER TABLE EQUIPAMENTO_PUBLICO ADD FOREIGN KEY(idBairro) REFERENCES BAIRRO(cod_bairro);
ALTER TABLE SERVICO_MUNICIPAL ADD FOREIGN KEY(idCidade) REFERENCES CIDADE(cod);
ALTER TABLE INDICADOR_DE_GESTAO ADD FOREIGN KEY(idCidade) REFERENCES CIDADE(cod);
