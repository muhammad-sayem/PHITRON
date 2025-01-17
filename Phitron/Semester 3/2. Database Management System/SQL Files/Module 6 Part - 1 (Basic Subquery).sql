USE module_6;

-- Subquery --

SELECT *
FROM employees
WHERE employee_id  = 144;

-- Qstn: Jar employee_id = 144 tar cheye kom salary  kara pay tader list --

SELECT *
FROM employees
WHERE salary < (SELECT salary
				FROM employees
				WHERE employee_id  = 144
                );
                
-- Qstn: Highest salary ke/kara paay, koto paay --

SELECT MAX(salary)
FROM employees;

SELECT *
FROM employees
WHERE salary = (SELECT MAX(salary)
				FROM employees
				);
                
-- Qstn: Kono ekta specific department e ke ke kaj kore, tader average salary koto, kon department e koto jon kaaj kore sheta ber korar subquery --                

SELECT department_id
FROM departments
WHERE department_name = 'Marketing';

SELECT *
FROM employees
WHERE department_id = (SELECT department_id
					   FROM departments
					   WHERE department_name = 'Marketing'
					  );
                      
SELECT AVG(salary)
FROM employees
WHERE department_id = (SELECT department_id
					   FROM departments
					   WHERE department_name = 'Marketing'
					  );
                      
-- --------------------------------------------------------------------------------- --

SELECT department_id
FROM departments
WHERE department_name = 'IT';

SELECT COUNT(*) AS 'Total Members'
FROM employees
WHERE department_id = (
						SELECT department_id 
                        FROM departments
                        WHERE department_name = "IT"
						);
             
-- Qstn: Programmer der total salary er subquery --

SELECT job_id
FROM jobs
WHERE job_title = 'Programmer';

SELECT SUM(salary)
FROM employees
WHERE job_id = (
				SELECT job_id
				FROM jobs
				WHERE job_title = 'Programmer'
			);















