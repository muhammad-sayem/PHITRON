-- Common Table Expressions (CTE) --

WITH Temp AS 
(SELECT *
FROM employees
LIMIT 5
)

SELECT *
FROM Temp;

-- --------------------------------------------------------------------- --

SELECT AVG(salary)
FROM employees
WHERE department_id = 60;		-- IT DEPARTMENT --

SELECT MAX(salary)
FROM employees
WHERE department_id = 20;		-- MARKETING DEPARTMENT --

-- Qstn: Emon empolyee der name show koro jara IT Dept er avg salary er theke beshi and Marketing Dept er max er theke kom paay --

WITH AVG_IT AS(
		SELECT AVG(SALARY) AS SAL_1
		FROM EMPLOYEES 
		WHERE DEPARTMENT_ID = 60
		),
        
MAX_MARKETING AS (
		SELECT MAX(SALARY)	SAL_2
		FROM EMPLOYEES 
		WHERE DEPARTMENT_ID = 20
		)
        
SELECT *
FROM EMPLOYEES
WHERE SALARY > (SELECT SAL_1 FROM AVG_IT) AND SALARY < (SELECT SAL_2 FROM MAX_MARKETING);

-- ------------------------------------------------------------------ --

-- Using Subquery --

SELECT *
FROM EMPLOYEES 
WHERE SALARY > (
	SELECT AVG(SALARY)
    FROM EMPLOYEES
    WHERE DEPARTMENT_ID = 60
	) AND (
	SELECT MAX(SALARY)
    FROM EMPLOYEES
    WHERE DEPARTMENT_ID = 20
    );
        
        
