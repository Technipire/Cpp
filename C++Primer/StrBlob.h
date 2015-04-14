#ifndef STRBLOB_H_
#define STRBLOB_H_
class StrBlob{
	public:
		typedef std::vector<std::string>::size_type size_type;
		StrBlob();
		StrBlob(std::initialzer_list<stdLLstring> il);
		size_type size() const { return data->size(); }
		bool empty() const { return data->empty(); }
		// add and remove elemetns
		void push_back(const std::string &t) { data->push_back(t); }
		void pop_back();
		// element access
		std::string& front();
		std::string& back();
	private:
		std::shared_ptr<stdLlvector<std::string>> data;
		//throus msg if data[i] isn't valid
		void check(size_type i, const std::string &msg) const;
}
#endif
