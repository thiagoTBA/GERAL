create database livraria;
use livraria;

create table zona(
zoncod integer not null primary key auto_increment,
zonnome varchar(50));


create table bairro(
baicod integer not null primary key,
bainome varchar(50),
baizoncod integer not null,
baiqtdepessoas int(10) unsigned NOT NULL default '0',
foreign key (baizoncod) references zona(zoncod));


create table cliente(
clicod integer not null primary key,
clinome varchar(50) not null,
clicpf varchar(14),
clirg varchar(10),
clifone varchar(10),
cliende varchar(100),
clibaicod integer not null,
clicep varchar(9) not null,
foreign key (clibaicod) references bairro(baicod));


create table departamento(
depcod integer not null auto_increment primary key,
depnome varchar(20));

create table funcionario(
funcod integer not null primary key,
funnome varchar(50) not null,
funcpf varchar(14),
funsalario double,
funbaicod integer not null,
fundepcod integer not null,
foreign key(fundepcod) references departamento(depcod),
foreign key(funbaicod) references bairro(baicod));

create table genero(
gencod integer not null auto_increment primary key,
gennome varchar(50));

create table editora(
edcod integer not null auto_increment primary key,
ednome varchar(50));

create table livros(
licod integer not null primary key,
linome varchar(100),
liautor varchar(50),
liedicao varchar(30),
liano integer,
liedcod integer not null,
listatus varchar(50),
lipreco double,
lisaldo integer,
ligencod integer not null,
foreign key (liedcod) references editora(edcod),
foreign key (ligencod) references genero(gencod));

create table venda(
vencod integer not null auto_increment primary key,
venfuncod integer not null,
venclicod integer not null,
vendata date not null,
foreign key (venfuncod) references funcionario(funcod),
foreign key (venclicod) references cliente(clicod));

create table itemvenda(
itvvencod integer not null,
itvlicod integer not null,
itvqtde integer,
primary key(itvvencod,itvlicod),
foreign key (itvvencod) references venda(vencod),
foreign key(itvlicod) references livros(licod));