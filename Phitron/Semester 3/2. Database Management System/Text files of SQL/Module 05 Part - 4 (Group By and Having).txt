USE dummydb;

-- GROUP BY --

SELECT department_id, MAX(salary)
FROM employees
GROUP BY department_id;

SELECT department_id, MIN(salary)
FROM employees
GROUP BY department_id;

SELECT department_id, AVG(salary)
FROM employees
GROUP BY department_id;

SELECT department_id, COUNT(*)		-- Proti group e koto jon employees ache sheta --
FROM employees
GROUP BY department_id;

SELECT department_id, MAX(salary)
FROM employees 
WHERE department_id != 20
GROUP BY department_id
HAVING MAX(salary) > 5000;

