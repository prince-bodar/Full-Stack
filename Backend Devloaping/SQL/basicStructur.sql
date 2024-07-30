USE compny;
-- DROP TABLE IF EXISTS employe;

CREATE TABLE employe (
  id  INT PRIMARY KEY,
  name VARCHAR(35),
  age INT NOT NULL
);

INSERT INTO employe VALUES (1,"prince",19);
INSERT INTO employe VALUES (2,"dev",20);

SELECT * FROM employe;