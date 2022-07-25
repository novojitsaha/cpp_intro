class EuropeanOption{

    private:
        void init();
        void copy(const EuropeanOption& o2);
        double CallPrice() const;
        double PutPrice() const;
        double CallDelta() const;
        double PutDelta() const;


    public:
        double r; // interest rate
        double sig; // volatility
        double K;   // Strike price
        double T;   // Expiry date
        double U;   // current underlying price
        double b;   // cost of carry
        
        string optType; // Option name (call, put)
    

    public:
    // Constructors
    EuropeanOption(); // Default constructor
    EuropeanOption(const EuropeanOption& option2); // copy constructor
    EuropeanOption(const string& optionType); // Create option type

    // Destructor
    virtual ~EuropeanOption();


    // Assignment operator
    EuropeanOption& operator = (const EuropeanOption& option2);

    // Functions that calculate option price and some sensitivities
    double Price() const;
    double Delta() const;


    // Modifier functions
    void toggle();  // change option type (C/P, P/C)
        
    
};

