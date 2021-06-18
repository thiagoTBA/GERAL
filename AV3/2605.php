create table tabcadastro(
matricula varchar(35) not null,
nome varchar(100),
rg varchar(20),
cpf varchar(14),
comp_residencia varchar (100),
telefone varchar(15),
PRIMARY KEY(matricula));

Insert into tabcadastro (matricula,nome,rg,cpf,comp_residencia,telefone) values (200,'DIEGO','1234560-AM','000.000.000-01','RUA 15, CIDADE NOVA','(92)91103085');
Insert into tabcadastro (matricula,nome,rg,cpf,comp_residencia,telefone) values (201,'THIAGO','1234561-AM','000.000.000-02','RUA BORBA, CACHOEIRINHA','(92)91103085');
Insert into tabcadastro (matricula,nome,rg,cpf,comp_residencia,telefone) values (202,'MICHELLE','1234562-AM','000.000.000-03','AV. SILVES, CRESPO','(92)91103085');
Insert into tabcadastro (matricula,nome,rg,cpf,comp_residencia,telefone) values (203,'GERALDO','1234563-AM','000.000.000-04','RUA ITATINS, CIDADE NOVA','(92)91103085');
Insert into tabcadastro (matricula,nome,rg,cpf,comp_residencia,telefone) values (204,'BRUNO','1234564-AM','000.000.000-05','RUA 5, CIDADE NOVA','(92)91103085');
Insert into tabcadastro (matricula,nome,rg,cpf,comp_residencia,telefone) values (205,'CARLA','1234565-AM','000.000.000-06','AV TEFE , JAPIIM I','(92)91103085');
Insert into tabcadastro (matricula,nome,rg,cpf,comp_residencia,telefone) values (206,'PAMELA','1234566-AM','000.000.000-07','RUA 15, CIDADE NOVA','(92)91103085');
Insert into tabcadastro (matricula,nome,rg,cpf,comp_residencia,telefone) values (207,'JOSIAS','1234567-AM','000.000.000-08','RUA 15, CIDADE NOVA','(92)91103085');
Insert into tabcadastro (matricula,nome,rg,cpf,comp_residencia,telefone) values (208,'JEFFERSON','1234568-AM','000.000.000-09','RUA 15, CIDADE NOVA','(92)91103085');
Insert into tabcadastro (matricula,nome,rg,cpf,comp_residencia,telefone) values (209,'DIBI','1234569-AM','000.000.000-10','RUA 15, CIDADE NOVA','(92)91103085');

create table tabgenero(
sequencia integer not null,
genero varchar(20),
PRIMARY KEY (sequencia));

Insert into tabgenero (sequencia,genero) values (1, 'Ação');
Insert into tabgenero (sequencia,genero) values (2, 'Ficção');
Insert into tabgenero (sequencia,genero) values (3, 'Terror');
Insert into tabgenero (sequencia,genero) values (4, 'Animação');
Insert into tabgenero (sequencia,genero) values (5, 'Comedia');
Insert into tabgenero (sequencia,genero) values (6, 'Drama');
Insert into tabgenero (sequencia,genero) values (7, 'Suspense');
Insert into tabgenero (sequencia,genero) values (8, 'Snurf');
Insert into tabgenero (sequencia,genero) values (9, 'Erotico');
Insert into tabgenero (sequencia,genero) values (10, 'Aventura');
Insert into tabgenero (sequencia,genero) values (11, 'Musical');
Insert into tabgenero (sequencia,genero) values (12, 'Romance');
Insert into tabgenero (sequencia,genero) values (13, 'Fantasia');

create table tabtipodesconto(
sequencia integer not null,
qtde integer,
valor decimal(10,2),
descricao varchar(50),
PRIMARY KEY(sequencia));

Insert into tabtipodesconto (sequencia,qtde,valor,descricao) values (1,3,'2.00','');
Insert into tabtipodesconto (sequencia,qtde,valor,descricao) values (2,4,'4.00','');
Insert into tabtipodesconto (sequencia,qtde,valor,descricao) values (3,5,'6.00','');
Insert into tabtipodesconto (sequencia,qtde,valor,descricao) values (4,6,'8.00','Leve uma fita de graça');
Insert into tabtipodesconto (sequencia,qtde,valor,descricao) values (5,7,'8.00','Leve um saco de Pipoca Grande');

create table tabtipomulta(
sequencia integer not null,
descricao varchar(50),
valor decimal(10,2),
PRIMARY KEY(sequencia));

Insert into tabtipomulta (sequencia,descricao,valor) values (1,'Atraso','4.00');
Insert into tabtipomulta (sequencia,descricao,valor) values (2,'Defeito','45.00');
Insert into tabtipomulta (sequencia,descricao,valor) values (3,'Fita não rebobinada','2.00');
Insert into tabtipomulta (sequencia,descricao,valor) values (4,'Extravio de Fita','45.00');


create table tabvalores(
cod integer not null,
tipo varchar(50),
valor decimal(10,2),
PRIMARY KEY(cod));

Insert into tabtipomulta (cod,tipo,valor) values (1,'Lançamento','4.00');
Insert into tabtipomulta (cod,tipo,valor) values (2,'Acervo','3.00');

create table tabfilmes(
cod integer not null,
filme varchar(100),
seq_genero integer not null REFERENCES tabgenero(sequencia) ON UPDATE CASCADE ON DELETE RESTRICT,
cod_valores integer not null REFERENCES tabvalores(cod) ON UPDATE CASCADE ON DELETE RESTRICT,
faixa varchar(20),
duracao varchar(10),
qtde integer,
PRIMARY KEY(cod));

Insert into tabfilmes (cod,filmes,seq_genero,cod_valores,faixa,duracao,qtde) values (1000,'Velozes & Furiosos 7',1,1,'+16','2h17min',3);
Insert into tabfilmes (cod,filmes,seq_genero,cod_valores,faixa,duracao,qtde) values (1001,'Vingadores: Era de Ultron',1,1,'+16','2h22min',5);
Insert into tabfilmes (cod,filmes,seq_genero,cod_valores,faixa,duracao,qtde) values (1002,'Mad Max: Estrada da Fúria',2,1,'+16','2h0min',4);
Insert into tabfilmes (cod,filmes,seq_genero,cod_valores,faixa,duracao,qtde) values (1003,'Cinderela',4,2,'livre','1h44min',2);
Insert into tabfilmes (cod,filmes,seq_genero,cod_valores,faixa,duracao,qtde) values (1004,'Cada Um na Sua Casa',4,1,'livre','2h17min',3);
Insert into tabfilmes (cod,filmes,seq_genero,cod_valores,faixa,duracao,qtde) values (1005,'Metanoia',6,1,'+16','1h53min',3);
Insert into tabfilmes (cod,filmes,seq_genero,cod_valores,faixa,duracao,qtde) values (1006,'A Incrível História de Adaline',12,1,'+16','1h53min',3);
Insert into tabfilmes (cod,filmes,seq_genero,cod_valores,faixa,duracao,qtde) values (1007,'Poltergeist',3,1,'+16','1h34min',4);
Insert into tabfilmes (cod,filmes,seq_genero,cod_valores,faixa,duracao,qtde) values (1008,'O Vendedor de Passados',6,1,'+16','1h53min',2);
Insert into tabfilmes (cod,filmes,seq_genero,cod_valores,faixa,duracao,qtde) values (1009,'Entre Abelhas',5,1,'+14','1h40min',4);
Insert into tabfilmes (cod,filmes,seq_genero,cod_valores,faixa,duracao,qtde) values (1010,'Jurassic World',10,1,'+14','2h4min',5);
Insert into tabfilmes (cod,filmes,seq_genero,cod_valores,faixa,duracao,qtde) values (1011,'Dragon Ball Z - O Renascimento de Freeza',4,1,'+14','1h33min',5);
Insert into tabfilmes (cod,filmes,seq_genero,cod_valores,faixa,duracao,qtde) values (1012,'The Last - Naruto o Filme',4,1,'+14','1h52min',4);
Insert into tabfilmes (cod,filmes,seq_genero,cod_valores,faixa,duracao,qtde) values (1013,'Maze Runner: Prova de Fogo',10,1,'+14','2h53min',3);
Insert into tabfilmes (cod,filmes,seq_genero,cod_valores,faixa,duracao,qtde) values (1014,'O Exterminador do Futuro: Gênesis',1,1,'+16','1h59min',5);
Insert into tabfilmes (cod,filmes,seq_genero,cod_valores,faixa,duracao,qtde) values (1015,'A Experiência',2,2,'+14','108min',3);
Insert into tabfilmes (cod,filmes,seq_genero,cod_valores,faixa,duracao,qtde) values (1016,'MIB - Homens de Preto',2,2,'+12','98min',3);
Insert into tabfilmes (cod,filmes,seq_genero,cod_valores,faixa,duracao,qtde) values (1017,'Colheita Maldita',3,2,'+16','1h53min',3);
Insert into tabfilmes (cod,filmes,seq_genero,cod_valores,faixa,duracao,qtde) values (1018,'Titanic',6,2,'+12','195min',3);
Insert into tabfilmes (cod,filmes,seq_genero,cod_valores,faixa,duracao,qtde) values (1019,'Planeta dos Macacos',1,2,'+14','110min',4);
Insert into tabfilmes (cod,filmes,seq_genero,cod_valores,faixa,duracao,qtde) values (1020,'Christine - O Carro Assassino',3,2,'+16','110min',3);
Insert into tabfilmes (cod,filmes,seq_genero,cod_valores,faixa,duracao,qtde) values (1021,'The Crow',7,2,'+14','102min',2);
Insert into tabfilmes (cod,filmes,seq_genero,cod_valores,faixa,duracao,qtde) values (1022,'Anastasia',4,2,'livre','94min',3);
Insert into tabfilmes (cod,filmes,seq_genero,cod_valores,faixa,duracao,qtde) values (1023,'Irmão Urso',4,2,'livre','83min',4);
Insert into tabfilmes (cod,filmes,seq_genero,cod_valores,faixa,duracao,qtde) values (1024,'Matrix',2,2,'+12','136min',5);
Insert into tabfilmes (cod,filmes,seq_genero,cod_valores,faixa,duracao,qtde) values (1025,'Mortal Kombat: A Aniquilação',1,2,'+14','98min',2);
Insert into tabfilmes (cod,filmes,seq_genero,cod_valores,faixa,duracao,qtde) values (1026,'Street Fighter - A Batalha Final',1,2,'+14','1h53min',1);
Insert into tabfilmes (cod,filmes,seq_genero,cod_valores,faixa,duracao,qtde) values (1027,'Candyman - O Assassino em Série',8,2,'+18','99min',3);
Insert into tabfilmes (cod,filmes,seq_genero,cod_valores,faixa,duracao,qtde) values (1028,'Mulan',4,2,'livre','90min',4);
Insert into tabfilmes (cod,filmes,seq_genero,cod_valores,faixa,duracao,qtde) values (1029,'O Mágico de Oz',13,2,'livre','101min',3);
Insert into tabfilmes (cod,filmes,seq_genero,cod_valores,faixa,duracao,qtde) values (1030,'Creepshow - Arrepio do Medo',3,2,'+18','115min',3);
Insert into tabfilmes (cod,filmes,seq_genero,cod_valores,faixa,duracao,qtde) values (1031,'Holocausto Canibal',8,2,'+18','96min',2);


create table tabatrasos(
sequencia integer not null,
seq_multa integer not null REFERENCES tabtipomulta(sequencia) ON UPDATE CASCADE ON DELETE RESTRICT,
mat_cadastro varchar(35) not null REFERENCES tabcadastro(matricula) ON UPDATE CASCADE ON DELETE RESTRICT,
diasatraso integer,
PRIMARY KEY(sequencia));

Insert into tabatrasos (sequencia,seq_multa,mat_cadastro,diasatraso) values (1,1,'201',2);
Insert into tabatrasos (sequencia,seq_multa,mat_cadastro,diasatraso) values (2,3,'209',2);
Insert into tabatrasos (sequencia,seq_multa,mat_cadastro,diasatraso) values (3,2,'202',4);
Insert into tabatrasos (sequencia,seq_multa,mat_cadastro,diasatraso) values (4,1,'204',7);
Insert into tabatrasos (sequencia,seq_multa,mat_cadastro,diasatraso) values (5,1,'200',3);
Insert into tabatrasos (sequencia,seq_multa,mat_cadastro,diasatraso) values (6,2,'205',5);
Insert into tabatrasos (sequencia,seq_multa,mat_cadastro,diasatraso) values (7,3,'207',1);

create table tabaluguel(
sequencia integer not null,
seq_tipodesconto integer not null REFERENCES tabtipodesconto(sequencia) ON UPDATE CASCADE ON DELETE RESTRICT,
cod_filmes integer not null REFERENCES tabfilmes(cod) ON UPDATE CASCADE ON DELETE RESTRICT,
mat_cadastro varchar(35) not null REFERENCES tabcadastro(matricula) ON UPDATE CASCADE ON DELETE RESTRICT,
data_retirada date,
data_prevista date,
PRIMARY KEY(sequencia));

Insert into tabaluguel (sequencia,seq_tipodesconto,cod_filmes,mat_cadastro,data_retirada,data_prevista) values (1,1,1000,'200','2015-05-27','2015-05-30');
Insert into tabaluguel (sequencia,seq_tipodesconto,cod_filmes,mat_cadastro,data_retirada,data_prevista) values (2,2,1031,'200','2015-05-27','2015-05-30');
Insert into tabaluguel (sequencia,seq_tipodesconto,cod_filmes,mat_cadastro,data_retirada,data_prevista) values (3,2,1028,'200','2015-05-27','2015-05-30');
Insert into tabaluguel (sequencia,seq_tipodesconto,cod_filmes,mat_cadastro,data_retirada,data_prevista) values (4,4,1011,'209','2015-05-30','2015-06-01');
Insert into tabaluguel (sequencia,seq_tipodesconto,cod_filmes,mat_cadastro,data_retirada,data_prevista) values (5,5,1021,'209','2015-05-30','2015-06-01');
Insert into tabaluguel (sequencia,seq_tipodesconto,cod_filmes,mat_cadastro,data_retirada,data_prevista) values (6,3,1023,'201','2015-02-01','2015-06-01');
Insert into tabaluguel (sequencia,seq_tipodesconto,cod_filmes,mat_cadastro,data_retirada,data_prevista) values (7,3,1001,'202','2015-02-22','2015-06-01');



create table tabpagamento(
sequencia integer not null,
mat_cadastro varchar(35) not null REFERENCES tabcadastro(matricula) ON UPDATE CASCADE ON DELETE RESTRICT,
seq_multa integer not null REFERENCES tabtipomulta(sequencia) ON UPDATE CASCADE ON DELETE RESTRICT,
seq_tipodesconto integer not null REFERENCES tabtipodesconto(sequencia) ON UPDATE CASCADE ON DELETE RESTRICT,
cod_valores integer not null REFERENCES tabvalores(cod) ON UPDATE CASCADE ON DELETE RESTRICT,
PRIMARY KEY(sequencia));

Insert into tabpagamento (sequencia,mat_cadastro,seq_multas,seq_tipodesconto,cod_valores) values (1,'200',,2,2);
Insert into tabpagamento (sequencia,mat_cadastro,seq_multas,seq_tipodesconto,cod_valores) values (2,'201',2,2,1);
Insert into tabpagamento (sequencia,mat_cadastro,seq_multas,seq_tipodesconto,cod_valores) values (3,'209',1,4,1);
Insert into tabpagamento (sequencia,mat_cadastro,seq_multas,seq_tipodesconto,cod_valores) values (4,'202',1,2,2);


