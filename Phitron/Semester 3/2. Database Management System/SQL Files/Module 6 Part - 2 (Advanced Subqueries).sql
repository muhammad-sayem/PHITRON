Use module_6;
-- Advanced Subqueries --

-- Qstn: Second highest salaty ke/kara paay ar koto paaay --

-- Way 1 --

SELECT DISTINCT salary
FROM employees
ORDER BY salary DESC
LIMIT 1
OFFSET 1;				-- ek line e "LIMIT 1, 1" dileo same kaaj e kore --	

SELECT *
FROM employees
WHERE salary = (
				SELECT DISTINCT salary
                FROM employees
                ORDER BY salary DESC
                LIMIT 1, 1
			);

-- Way 2 --

SELECT MAX(salary)
FROM employees;

SELECT *
FROM employees
WHERE salary = (
			SELECT MAX(salary)
			FROM employees
			WHERE salary < (SELECT MAX(salary)
							FROM employees
						)
			);
            
-- Qstn: Kon kon employee manager er cheye beshi salary paay --

SELECT *
FROM employees AS EMP
WHERE salary > (SELECT salary
				FROM employees AS MGR
                WHERE EMP.manager_id = MGR.employee_id
			);
            
-- Qstn: Kar kar Job_ID tar manager er Job_ID er same --

SELECT *
FROM employees AS EMP
WHERE job_id = (SELECT job_id
				FROM employees AS MGR
                WHERE EMP.manager_id = MGR.employee_id
				);



















