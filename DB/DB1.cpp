#include <iostream>
#include <mysql/jdbc.h>
/* Class 구현 */
using namespace std;
using namespace sql;

// 전처리
#define	SERVER_IP	"127.0.0.1:3306"
#define USERNAME	"root"
#define PASSWORD	"12345"
#define DATABASE	"testDB"

class MySQLConnector
{
private:
	string server = "tcp://127.0.0.1:3306";
	string username = "root";
	string password = "12345";
	string database = "testDB";
	unique_ptr<Connection> conn;
public:
	MySQLConnector(const string& serv, const string& user, const string& pw, const string& db)
		: server(serv), username(user), password(pw), database(db)
	{
		try
		{
			mysql::MySQL_Driver* driver = mysql::get_mysql_driver_instance();
			unique_ptr<Connection> conn(driver->connect(server, username, password));

			conn->setSchema(database);
			cout << "MySQL Connection success" << endl;
		} catch (SQLException& e)
		{
			cerr << "MySQL Connection failed!" << e.what() << endl;
		}
	}
	~MySQLConnector()
	{
		cout << "MySQL Disconnetction" << endl;
	}
};
int main(void)
{

	MySQLConnector db{SERVER_IP, USERNAME, PASSWORD, DATABASE};
	return 0;
}