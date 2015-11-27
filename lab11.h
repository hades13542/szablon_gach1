#define METER 1
#define SECOND 2

template <int T>
class Float_t
{
public:
	Float_t(float val):_val(val){}
	inline float Get() const {return _val;}
	template <int Y>
	Float_t <T-Y> operator /(Float_t<Y>& a){return this->Get()/a.Get();}
	Float_t <T> operator +(Float_t<T>&a){return this->Get()+a.Get();}
private:
	float _val;
};