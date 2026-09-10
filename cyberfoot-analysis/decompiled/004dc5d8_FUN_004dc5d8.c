// Address: 004dc5d8
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

undefined2 FUN_004dc5d8(void)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  
  iVar2 = thunk_FUN_0047910c();
  if (iVar2 == 0) {
    cVar1 = FUN_00403c10(0,PTR_PTR_00475da8);
    if (cVar1 == '\0') {
      uVar3 = 0;
    }
    else {
      uVar3 = (uint)bRam00000060;
    }
  }
  else {
    uVar3 = 0;
  }
  return (&DAT_0066970c)[uVar3 & 0x7f];
}

