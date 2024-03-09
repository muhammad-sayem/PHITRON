USE dummydb;

-- SELECT --

-- Select Everything from a table --

SELECT *
FROM countries;

SELECT *
FROM Departments;

SELECT *
FROM Employees;

-- Select specific things from a table --

SELECT first_name
from employees;

SELECT first_name, last_name
from employees;	

-- ------------------------------------------------------------------ --

-- WHERE --

SELECT *
FROM employees
WHERE department_id = 60;

SELECT *
FROM employees
WHERE department_id = 60 and salary > 8000;

SELECT *
FROM employees
WHERE department_id = 60 or salary > 8000;

-- ARITHMATIC  OPERATORS --


SELECT 6+5;
SELECT 6-5;

SELECT first_name, salary, salary+1000
FROM employees;

SELECT first_name, salary, salary+1000
FROM employees
WHERE department_id = 100;

-- COMPARISON OPERATORS --

SELECT *
FROM Employees
WHERE salary = 6000;

-- DISTINCT --

SELECT DISTINCT job_id 
FROM employees;

-- ORDER BY --

SELECT *
FROM employees
ORDER BY salary ASC;

SELECT *
FROM employees
ORDER BY salary DESC;

-- LIMIT AND OFFSET --

SELECT *
FROM employees
ORDER BY salary ASC			
LIMIT 5;			-- Start theke koyta dekhte chai sheta --

SELECT *
FROM employees
ORDER BY salary DESC
LIMIT 4, 5;			-- First 4 ta baad dibe ar porer 5 ta show korbe --

SELECT *
FROM employees
ORDER BY salary DESC
LIMIT 5			-- 5 ta show korbe --
OFFSET 4;		-- First 4 ta baad dibe --

-- LIKE and AS --

SELECT *
FROM employees
WHERE last_name LIKE 'Green%';

SELECT *
FROM employees
WHERE last_name LIKE '%ee%';

SELECT first_name AS 'First Nmae', salary, salary+10000 AS 'Upgraded Salary'
FROM employees;