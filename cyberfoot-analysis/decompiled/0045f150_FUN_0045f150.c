// Address: 0045f150
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0045f150(int param_1,undefined1 param_2)

{
  char cVar1;
  int iVar2;
  
  *(undefined1 *)(param_1 + 0x210) = param_2;
  cVar1 = FUN_0046cde4(param_1);
  if (cVar1 != '\0') {
    iVar2 = FUN_0047e4c0(param_1);
    if (iVar2 != 0) {
      FUN_004673cc(iVar2,0xb007,0,*(undefined4 *)(iVar2 + 0x220));
    }
  }
  return;
}

