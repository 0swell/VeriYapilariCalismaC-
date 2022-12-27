#include <iostream>
#include<fstream>
#include<iomanip>
#include<string>
using namespace std;

class Materyal
{	
	public:
		string materyalAd;
		string materyalTuru;
		string yazar;
		int yayýmTarihi;
		string cevirmenÝsmi;	
		int sonTeslimTarihi;
	
		
	void MateryalGir();
	void MateryalYazdir();
};

void Materyal::MateryalGir();
{
	cout.setf(ios::right);
	cout<<"Materyal Adi: ";
 	cin>>materyalAd;
 	cout<<"Materyal Turu Nedir: ";
 	cin>>materyalTuru;
 	cout<<"Sayfa Sayisi Kactir: ";
 	cin>>sayfaSayisi;
 	cout<<"Materyal Yazarinin Adi: ";
 	cin>>yazar;
 	cout<<"Materyal Yayim Tarihi: ";
 	cin>>yayýmTarihi;
 	cout<<"Materyal Cevirmen Adi: ";
 	cin>>cevirmenÝsmi;
 	cout<<"Son Teslim Tarihi :";
 	cin>>sonTeslimTarihi;
 	
}
&nbsp;
void Materyal::MateryalYazdýr()
{
 cout.setf(ios::right);
 cout<<"Adi: "<<materyalAd<<endl;
 cout<<"Materyal turu: "<<materyalTuru<<endl;
 cout<<"Sayfa sayisi: "<<sayfaSayisi<<endl;
 cout<<"Yazar Adi: "<<yazar<<endl;
 cout<<"yayýmTarihi: "<<yayýmTarihi<<endl;
 cout<<"Cevirmen Adi: "<<cevirmenÝsmi<<endl;
 cout<<"Son Teslim Tarihi: "<<sonTeslimTarihi<<endl;
 cout<<"**************************************"<<endl;
}
//End Class Materyal

//Kitap arþivinde kitap arama (BST)

//BookSearch

+ root_: Node*

+ Insert(id: int, title: string, author: string)
+ Search(id: int) -> materyal*

+ Insert(materyal: Materyal, node: Node**)
+ Search(id: int, node: Node*) -> materyal*

//Node
+ materyal: Materyal
+ left: Node*
+ right: Node*

//Book
+ id: int
+ title: string
+ author: string

struct Materyal {
  int id;
  std::string title;
  std::string author;
};

struct Node {
  Materyal materyal;
  Node* left;
  Node* right;
};

class MateryalSearch {
 public:
  MateryalSearch() : root_(nullptr) {}

  void Insert(int id, const std::string& title, const std::string& author) {
    Materyal materyal{id, title, author};
    Insert(materyal, &root_);
  }

  Materyal* Search(int id) {
    return Search(id, root_);
  }

 private:
  void Insert(const Materyal& materyal, Node** node) {
    if (*node == nullptr) {
      *node = new Node{materyal, nullptr, nullptr};
    } else if (materyal.id < (*node)->materyal.id) {
      Insert(materyal, &(*node)->left);
    } else {
      Insert(materyal, &(*node)->right);
    }
  }

  Materyal* Search(int id, Node* node) {
    if (node == nullptr) {
      return nullptr;
    } else if (id == node->materyal.id) {
      return &node->materyal;
    } else if (id < node->materyal.id) {
      return Search(id, node->left);
    } else {
      return Search(id, node->right);
    }
  }

  Node* root_;
};

int main() 
{
  MateryalSearch materyal_search;

  // Insert some books into the book search tree.
  materyal_search.Insert(1, "The Great Gatsby", "F. Scott Fitzgerald");
  materyal_search.Insert(2, "To Kill a Mockingbird", "Harper Lee");
  materyal_search.Insert(3, "Pride and Prejudice", "Jane Austen");
  materyal_search.Insert(4, "The Catcher in the Rye", "J.D. Salinger");
  materyal_search.Insert(5, "The Grapes of Wrath", "John Steinbeck

}


//Regenerate response
