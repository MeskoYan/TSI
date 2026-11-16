--Aqui vai ser as coisas do dia 24/09 que é outra lista de exercícios
DROP TABLE Clientes;
DROP TABLE Pets;
DROP TABLE Telefones;

select * from Clientes;
select * from Pets;
select * from Telefones;

--tabela cliente ok
create table Clientes(
	id SERIAL NOT NULL PRIMARY KEY,
	nome VARCHAR(50) NOT NULL,
	cpf VARCHAR(8) UNIQUE NOT NULL,
	logradouro VARCHAR(50) NOT NULL,
	nro_residencia VARCHAR(50) NOT NULL,
	complemento VARCHAR(6),
	bairro VARCHAR(30) NOT NULL,
	municipio VARCHAR(30) NOT NULL,
	cep CHAR(8) NOT NULL,
	uf CHAR(2) NOT NULL
);

create table Pets(
	id SERIAL NOT NULL,
	nome VARCHAR(30) NOT NULL,
	sexo VARCHAR(1) NOT NULL CHECK(sexo in ('F','f','M','m')),
	nascimento DATE NOT NULL,
	tipo VARCHAR(20) NOT NULL,
	raca VARCHAR(30) NOT NULL,
	cor VARCHAR(20) NOT NULL DEFAULT 'Não Informada',
	id_cliente INT NOT NULL,
	PRIMARY KEY (id, id_cliente),
	FOREIGN KEY (id_cliente) REFERENCES Clientes(id) ON DELETE CASCADE
);

create table Telefones(
	id SERIAL NOT NULL,
	nro_telefone VARCHAR(50) NOT NULL,
	id_cliente INT NOT NULL,
	PRIMARY KEY (id, id_cliente),
	FOREIGN KEY (id_cliente) REFERENCES Clientes(id) ON DELETE CASCADE
);

--Isso configura os exercícios 1 e 2

--agora o 3 aqui
--Ok vou inserir primeiro os clientes

INSERT INTO Clientes(nome,cpf,logradouro,nro_residencia,complemento,bairro,municipio,cep,uf) 
VALUES('Yan','05760319','cidade de lisboa','622','Sobra','Fragata','Pelotas','96010045','RS');

INSERT INTO Clientes(nome,cpf,logradouro,nro_residencia,complemento,bairro,municipio,cep,uf) 
VALUES('Mesko','05760314','domingos','612','Sob','Dunas','Camaqua','96010046','RG');

INSERT INTO Clientes(nome,cpf,logradouro,nro_residencia,complemento,bairro,municipio,cep,uf) 
VALUES('Da','05760313','pinheiro','623','top','Lindoia','Canguçu','96010044','RA');

INSERT INTO Clientes(nome,cpf,logradouro,nro_residencia,complemento,bairro,municipio,cep,uf) 
VALUES('Silva','05760312','salso','642','flex','Pestano','Turuçu','96010042','RU');

INSERT INTO Clientes(nome,cpf,logradouro,nro_residencia,complemento,bairro,municipio,cep,uf) 
VALUES('Junior','05760311','possebom','662','mid','Barro duro','Pelotas','96010047','RO');

-- ok aqui foram 5 clientes, agora é 8 pets

INSERT INTO Pets(nome,sexo,nascimento,tipo,raca,cor,id_cliente)
VALUES ('pitufo','m','10/10/2005','cachorro','salsicha','marrom',1);
INSERT INTO Pets(nome,sexo,nascimento,tipo,raca,cor,id_cliente)
VALUES ('pitufo junior','m','10/10/2010','cachorro','salsicha','marrom',1);
INSERT INTO Pets(nome,sexo,nascimento,tipo,raca,cor,id_cliente)
VALUES ('pitufo mae','f','10/1/2005','cachorro','shitzu','marrom',1);

INSERT INTO Pets(nome,sexo,nascimento,tipo,raca,cor,id_cliente)
VALUES ('catchuca','m','10/10/2050','gato','retriever','vermelho',2);
INSERT INTO Pets(nome,sexo,nascimento,tipo,raca,cor,id_cliente)
VALUES ('calhambeque','m','10/4/2005','gato','golden','cinza',2);

INSERT INTO Pets(nome,sexo,nascimento,tipo,raca,cor,id_cliente)
VALUES ('marlboro','m','10/10/2050','cachorro','retriever','vermelho',3);
INSERT INTO Pets(nome,sexo,nascimento,tipo,raca,cor,id_cliente)
VALUES ('rojo','f','10/4/2005','cachorro','golden','cinza',4);
INSERT INTO Pets(nome,sexo,nascimento,tipo,raca,cor,id_cliente)
VALUES ('rex','f','10/4/2005','cachorro','golden','cinza',5);

--Ok agora vão ser 5 telefones

INSERT INTO Telefones(nro_telefone, id_cliente)
VALUES ('53991509526',1);
INSERT INTO Telefones(nro_telefone, id_cliente)
VALUES ('53991509525',1);

INSERT INTO Telefones(nro_telefone, id_cliente)
VALUES ('53991509523',2);
INSERT INTO Telefones(nro_telefone, id_cliente)
VALUES ('53991509522',3);
INSERT INTO Telefones(nro_telefone, id_cliente)
VALUES ('53991509521',4);

--Ok isso compreende até a 3)c.


--Dia 24/09/2026


--Agora vou fazer a 4 listar todo o conteúdo dos clientes

select * from Clientes;

--Agora vou fazer a 5

select id,nome from pets;
select nome from pets where sexo in ('M','m') ORDER BY nome;

--Agora é a 6

select nome, nascimento from pets ORDER BY nascimento DESC;

--agora é a 7

select nome, nascimento from Pets where nascimento BETWEEN '2005-10-01' and '2005-10-04';

--ok 8 agora

select nome, logradouro from Clientes where complemento = NULL;

--ok agora 9
--aqui a palavra-chave é LIKE sendo o char desejado + % para simbolizar começo e _ para char aleatório

select * from Pets;
select nome from Pets where nome LIKE 'p%' or nome LIKE 'P%';

--ok agora 10

select DISTINCT municipio from Clientes;

--ok agora a 11

select UPPER(nome) as NomeMaiusculo from Clientes;


--dia 24 feito, yan mesko out !



