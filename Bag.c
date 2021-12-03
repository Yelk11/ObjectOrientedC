

static const size_t _Set = sizeof(struct Set); 
static const size_t _Object = sizeof(struct Object);
const void * Set = & _Set;
const void * Object = & _Object;

void * new (const void * type, ...)
{ 
    const size_t size = * (const size_t *) type;
    void * p = calloc(1, size);
    assert(p); 
    return p;
}

