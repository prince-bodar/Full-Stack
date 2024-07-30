create database if not exists  exercises;

use exercises;
 
 DROP TABLE IF EXISTS CLIENT_MASTER;
 DROP TABLE IF EXISTS PRODUCT_MASTER;
 DROP TABLE IF EXISTS SALESMAN_MASTER;
 
 create table CLIENT_MASTER (
    CLIENTNO varchar(6),
    NAME varchar(20),
    ADDRESS1 varchar(30),
    ADDRESS2 varchar(30),
    CITY varchar(15),
    PINCODE int(8),
    STATE varchar(15),
    BALDUE int
 );
 
 INSERT INTO CLIENT_MASTER VALUES
 ("C0001","lavan bayross","ANUAS","2/C","Mumbai",40045,"Maharashtr",10000), 
 ("C0002","Mamata Mumdar","custuma","20/A","Sidani",40045,"New south wels",00),
 ("C0003","Chaya Banker","Royal","4/B","New York",40045,"New york",20000),
 ("C0004","Ashwini Joshi","Plastino","1/A","Maxico",40045,"New york",50000),
 ("C0005","Hansel calco","Stuck","10/B","Mumbai",40045,"Maharashtr",60000),
 ("C0006","Deepak Shrama","Beora","2/D","Surat",40045,"Gujarat",90000);
 
 select * from  CLIENT_MASTER;
 
  create table PRODUCT_MASTER (
    productNO varchar(6),
    Desription varchar(15),
    profitPercent int(8),
    unitMeasure varchar(10),
    QutOnHand int (8),
    ReorDerLVL int(8),
    SellPrice int(8),
    CostPrice int(8)
 );
 
 INSERT INTO PRODUCT_MASTER VALUES 
 ( "p0001"  , "T-Shirts" , 5 , "Piece" , 200 , 50 , 350 , 250),
 ( "p0354"  , "Shirts" , 6 , "Piece" , 150 , 50 , 350 , 250),
 ( "p06371" , "Cottun jeans" , 8 , "Piece" , 100 , 50 , 350 , 250),
 ( "p0341"  , "Jeans" , 4 , "Piece" , 30 , 50 , 350 , 250),
 ( "p07891" , "Trousers" , 5 , "Piece" , 230 , 50 , 350 , 250),
 ( "p0941"  , "Pull Overs" , 6 , "Piece" , 170 , 50 , 350 , 250),
 ( "p0641"  , "Denim Shirts" , 7 , "Piece" , 100 , 50 , 350 , 250),
 ( "p08451" , "Laycra Tops" , 3 , "Piece" , 210 , 50 , 350 , 250),
 ( "p04561" , "Laycra Tops" , 3 , "Piece" , 100 , 50 , 350 , 250);
 
  create table SALESMAN_MASTER (
    SalesManTNo varchar(6),
    Name varchar(20),
    ADDRESS1 varchar(30),
    ADDRESS2 varchar(30),
    CITY varchar(15),
    PINCODE int(8),
    STATE varchar(15)
 );
 
 INSERT INTO SALESMAN_MASTER VALUES
 ("C0001","lavan bayross","2/C","borevali","Mumbai",400455,"Maharashtr"), 
 ("C0002","Mamata Mumdar","20/A","bandra","Mumbai",354225,"Maharashtr"),
 ("C0003","Chaya Banker","4/B","juhu","Mumbai",343446,"Maharashtr"),
 ("C0004","Ashwini Joshi","1/A","wroli","Mumbai",562745,"Maharashtr");

select * from  CLIENT_MASTER;
select * from  PRODUCT_MASTER; 
select * from  SALESMAN_MASTER; 