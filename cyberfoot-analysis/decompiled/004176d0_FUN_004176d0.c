// Address: 004176d0
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

undefined4 FUN_004176d0(undefined4 param_1)

{
  char cVar1;
  undefined4 local_c;
  undefined1 local_8 [4];
  
  cVar1 = FUN_004175e4(param_1,local_8,&local_c);
  if (cVar1 == '\0') {
    FUN_00411988(0x80070057);
  }
  return local_c;
}

