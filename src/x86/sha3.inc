

; SHA-3
; Odzhan

ifndef SHA3_H
SHA3_H	EQU	<>

SHA3_ROUNDS	            EQU	24
SHA3_STATE_LEN	        EQU	25

SHA3_224	              EQU	0
SHA3_224_DIGEST_LENGTH	EQU	28
SHA3_224_CBLOCK	        EQU	144

SHA3_256	              EQU	1
SHA3_256_DIGEST_LENGTH	EQU	32
SHA3_256_CBLOCK	        EQU	136

SHA3_384	              EQU	2
SHA3_384_DIGEST_LENGTH	EQU	48
SHA3_384_CBLOCK	        EQU	104

SHA3_512	              EQU	3
SHA3_512_DIGEST_LENGTH	EQU	64
SHA3_512_CBLOCK	        EQU	72

SHA3_CTX	struct 
  union state
    v8	byte  SHA3_STATE_LEN*8 dup (?)
    v32	dword SHA3_STATE_LEN*4 dup (?)
    v64	qword SHA3_STATE_LEN dup (?)
  ends
  
  index	  dword	?
  dgstlen	dword	?
  rounds	dword	?
  blklen	dword	?
  
  union blk
    v8	byte  256 dup (?)
    v32	dword 256/4 dup (?)
    v64	qword 256/8 dup (?)
  ends
SHA3_CTX	ends

endif