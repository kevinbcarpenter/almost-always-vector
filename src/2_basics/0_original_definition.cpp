template <class T> class DynArray {
public:
  // Constructors
  DynArray();              // Array of size 0
  DynArray(unsigned size); // Array of given size

  // Destructor
  ~DynArray(); // destructs elements and frees dynamic store

  // Copy and assign
  DynArray(const DynArray &source);
  const DynArray &operator=(const DynArray &source);

  // Element access
  T &operator[](unsigned index);
  const T &operator[](unsigned index) const;

  // Low level aaccess to array elements
  T *base(); // get address of first element
  const T *base() const :

      // Size
      unsigned size() const;  // returns size of array
  unsigned size(unsigned sz); // change size to sz

  // Low level helper functions
  void swap(DynArray &other); // swap contents
};