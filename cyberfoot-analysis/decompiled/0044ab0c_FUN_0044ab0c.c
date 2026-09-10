// Address: 0044ab0c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

byte FUN_0044ab0c(undefined4 param_1)

{
  byte bVar1;
  undefined1 auStack_44 [8];
  uint local_3c;
  
  bVar1 = DAT_0044ab58;
  FUN_0044a950(param_1,auStack_44);
  if ((local_3c & 1) != 0) {
    bVar1 = bVar1 | 1;
  }
  if ((local_3c & 2) != 0) {
    bVar1 = bVar1 | 2;
  }
  if ((local_3c & 4) != 0) {
    bVar1 = bVar1 | 4;
  }
  if ((local_3c & 8) != 0) {
    bVar1 = bVar1 | 8;
  }
  return bVar1;
}

