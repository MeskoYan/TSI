--Aqui vai ser as coisas do petshop dia 10/09/26
--Ok vou criar primeiro o cliente

--Ok acho que tenho o cliente

DROP TABLE Cliente;
DROP TABLE Pets;
DROP TABLE Telefone;

select * from Cliente;
select * from Pets;
select * from Telefone;


create table Cliente(
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
	id SERIAL NOT NULL PRIMARY KEY,
	nome VARCHAR(30) NOT NULL,
	sexo VARCHAR(1) NOT NULL CHECK(sexo in ('F','f','M','m')),
	nascimento DATE NOT NULL,
	tipo VARCHAR(20) NOT NULL,
	raca VARCHAR(30) NOT NULL,
	cor VARCHAR(20) NOT NULL DEFAULT 'Não Informada',
	id_cliente INT NOT NULL,
	FOREIGN KEY (id_cliente) REFERENCES Cliente(id) ON DELETE CASCADE
);

create table Telefone(
	id SERIAL NOT NULL PRIMARY KEY,
	nro_telefone VARCHAR(50) NOT NULL,
	id_cliente INT NOT NULL,
	FOREIGN KEY (id_cliente) REFERENCES Cliente(id) ON DELETE CASCADE
);


