#include "Allocator.h"


class LinearAllocator : public Allocator {
private:
	/* Offset from the start of the memory block */
	long m_offset;
public:
	/* Allocation of real memory */
	LinearAllocator(const long totalSize);

	/* Frees all memory */
	virtual ~LinearAllocator();

	/* Allocate virtual memory */
	virtual void* Allocate(const std::size_t size, const std::size_t allignment) override;

	/* Frees virtual memory */
	virtual void Free(void* ptr) override;

	/* Frees all virtual memory */
	virtual void Reset() override;
};