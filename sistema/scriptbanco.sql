create table cadastro(
id integer not null
nome varchar(50) not null,
idade integer,
salario decimal(10,2),
PRIMARY KEY(id));

create table tabusuarios(
login varchar(20) not null,
senha varchar(20) not null,
perfil integer not null,
primary key(login));

insert into tabusuarios (login,senha,perfil) values ('marcelo','batore',1);
insert into tabusuarios (login,senha,perfil) values ('joao','bare',2);
insert into tabusuarios (login,senha,perfil) values ('cristiano','fanta',3);


