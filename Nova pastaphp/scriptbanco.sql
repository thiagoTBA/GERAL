CREATE TABLE tabbairros (
id integer not null,
descricao varchar(50) not null,
primary key(id)
);
insert into tabbairros (id,descricao) values (1,'São Jorge');
insert into tabbairros (id,descricao) values (2,'Centro');
insert into tabbairros (id,descricao) values (3,'Parque 10');

CREATE TABLE tabcadastros (
id integer not null,
nome varchar(50) not null,
idade integer,
salario decimal(10,2),
id_bairro integer not null REFERENCES tabbairros(id) ON UPDATE CASCADE ON DELETE RESTRICT,
primary key(id)
);

create table tabusuarios (
login varchar(20) not null,
senha varchar(20) not null,
perfil integer not null,
primary key (login)
);

-- 0 = administrador
-- 1 = gerente
-- 2 = orelha

insert into tabusuarios (login,senha,perfil)
values ('marcelo','batore',0);

insert into tabusuarios (login,senha,perfil)
values ('joao','bare',1);

insert into tabusuarios (login,senha,perfil)
values ('cristiano','fanta',2);