#include "Patch.hpp"

Patch::Patch() {
}

void Patch::patch(BiosVector & biosBytesVector) {
    //	bool old;
    //	asm (
    //			"btsl %2,%1\n\t" // Turn on zero-based bit #Offset in Base.
    //			"sbb %0,%0"      // Use the CF to calculate old.
    //			: "=r" (old), "+rm" (*Base)
    //	        : "Ir" (Offset)
    //	        : "cc"
    //	);
}
void Patch::unpatch(BiosVector & biosBytesVector) {

}
bool Patch::isPatched(BiosVector & biosBytesVector) {
    //TODO implement
    return false;
}
