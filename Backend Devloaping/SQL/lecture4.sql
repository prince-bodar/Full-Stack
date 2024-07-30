
-- employee
select * from employees;
select * from employees where employeeNumber between 1200 and 1500;
select * from employees where officecode >=2 and jobtitle !="sales rep";

-- customer
select * from customers;
select * from customers where country !="USA";
select * from Customers where customernumber < 150 OR customernumber > 200;

-- employee 
select concat(firstname  ,"", lastname) as Nameoftheemployees from employees order by lastname;

-- customer
select * from customers where creditlimit > 7000 order by contactLastName desc;
select * from customers where city in ("singapore", "Liverpool","NYC");
select * from customers where contactFirstName like "Rita%";

-- employee 
select * from employees where officeCode in (1,2,3);

-- customer
select * from customers where creditLimit between 50000 and 95000;

-- employee 
select * from employees where officeCode not between 1 and 3;

-- customer
select * from customers where contactFirstName like "s%";
select * from customers where contactFirstName like "s%h";
select * from customers where contactFirstName like "s____";
select * from customers where contactFirstName like '________ ';
select * from customers where contactFirstName like "a%e ";
select * from customers where contactFirstName like "ee%";

-- employee
select officeCode, count(firstname) from employees group by officecode;

-- customer
select state,max(creditLimit) as creditlimit from customers group by state;


