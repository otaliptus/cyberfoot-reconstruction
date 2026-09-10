// Address: 0040c534
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

WORD FUN_0040c534(void)

{
  _SYSTEMTIME local_10;
  
  GetLocalTime(&local_10);
  return local_10.wYear;
}

