--Aula 4 sequência da aula 3, logo tem q ter as tables da aula 3

SELECT * FROM aluno;

--Aqui é pra dar erro porque o codigo 2 é da tabela aluno
DELETE FROM curso WHERE codigo=2;

--Aqui dá erro pq como o curso é pai, quando tenta trocar deixa os alunos em curso 2 tudo sem pai
UPDATE curso SET codigo = 22 WHERE codigo = 2;

--MIM DE PAPAI AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA
-- MIM DE PAPAI AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA