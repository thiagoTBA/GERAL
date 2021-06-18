/*
FUNÇÕES DE SQL
*/
create table tabVendas(
id integer not null,
dataDia date,
valorPago decimal(10,2),
historico varchar(100),
id_produto integer,
primary key(id)
);

insert into tabVendas(id, dataDia, valorPago, historico, id_produto) values(1,'2015-05-02','1059.56','Venda a Vista',2);
insert into tabVendas(id, dataDia, valorPago, historico, id_produto) values(2,'2015-04-01',' 500.00','Troca Mercadoria',4);
insert into tabVendas(id, dataDia, valorPago, historico, id_produto) values(3,'2015-05-18','11300.09','Venda a Vista',11);
insert into tabVendas(id, dataDia, valorPago, historico, id_produto) values(4,'2015-06-01','200.03','Ceramica',1);
insert into tabVendas(id, dataDia, valorPago, historico, id_produto) values(5,'2015-04-10','630.45','Cola',2);
insert into tabVendas(id, dataDia, valorPago, historico, id_produto) values(6,'2015-10-09','599.45','Venda a Vista',5);
insert into tabVendas(id, dataDia, valorPago, historico, id_produto) values(7,'2015-03-11','1.05','Ajuste de Desconto',15);
insert into tabVendas(id, dataDia, valorPago, historico, id_produto) values(8,'2015-05-31','789.49','Revestimantos',8);
insert into tabVendas(id, dataDia, valorPago, historico, id_produto) values(9,'2015-05-20','144.05','Venda a Vista',7);
insert into tabVendas(id, dataDia, valorPago, historico, id_produto) values(10,'2015-05-14','766.50','Venda a Vista',4);
insert into tabVendas(id, dataDia, valorPago, historico, id_produto) values(11,'2015-08-20','14.05','Venda a Vista',6);
insert into tabVendas(id, dataDia, valorPago, historico, id_produto) values(12,'2015-12-14','66.50','Venda a Vista',3);

-- Contar quantidade de vendas geral:
select count(*) as TotalVendas from tabVendas;

-- Contar total de vendas do produto id =2:
select count(*) as TotalVendas from tabVendas where id_produto=2;

-- Apresentar o total em valores reais de todas as vendas acumuladas:
select sum(valorPago) from tabVendas;

-- Apresentar o total em valores reais de todas as vendas acumuladas de vendas do produto id =2:
select sum(valorPago) from tabVendas where id_produto=2;

-- Media dos valores pagos das vendas:
select avg(valorPago) from tabVendas;

-- Maior valor inserido na coluna Id_produto:
select max(id_produto) from tabVendas;

-- Identificar a maior venda realizada:
select max(valorPago) from tabVendas;

-- Exibir as vendas realizadas no mes de maio de 2015:
select *
from tabVendas
where dataDia between '2015-05-01' and '2015-05-31';

-- OU:
select *
from tabVendas
where dataDia >= '2015-05-01' and dataDia <= '2015-05-31'
/*
matheus_santos_balboa2013mma@hotmail.com 
Telefone: 93039258

Equipe 5:
	Ewerson
	Matheus
	Fabio
	Casa Loterica
	
	Ordem de apresentação:
	2-4-3-1-5
*/