import sqlite3

conexion = sqlite3.connect("/home/ubuntu/SQL/ejemplo.db")

c = conexion.cursor()

#persona = c.execute("select * from persona where id_persona = 1")
persona = c.execute("select * from persona ")

c.execute("create table bar (id_bar integer primary key not null, nombre varchar(30), direccion varchar(50)   )  ")

#se imprime la consulta
for i in persona:
    print(i)



