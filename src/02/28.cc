
class Foo {
	
} 
// Note: no semi colon above!

int main() 
{

	// 28.cc:7: error: new types may not be defined in a return type
	// 28.cc:7: note: (perhaps a semicolon is missing after the definition of 'Foo')
	// 28.cc:7: error: two or more data types in declaration of 'main'

	return 0;
}