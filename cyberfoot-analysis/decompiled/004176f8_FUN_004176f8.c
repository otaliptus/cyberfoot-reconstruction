// Address: 004176f8
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

undefined2 FUN_004176f8(undefined4 param_1)

{
  char cVar1;
  undefined2 uVar2;
  undefined1 auStack_c [4];
  undefined2 *local_8;
  
  cVar1 = FUN_004175e4(param_1,auStack_c,&local_8);
  if (cVar1 == '\0') {
    uVar2 = 0;
  }
  else {
    uVar2 = *local_8;
  }
  return uVar2;
}

