// Address: 00450634
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

uint FUN_00450634(uint param_1,char param_2)

{
  uint uVar1;
  HWND pHVar2;
  int iVar3;
  
  uVar1 = param_1;
  if (param_2 != *(char *)(param_1 + 0x215)) {
    *(char *)(param_1 + 0x215) = param_2;
    uVar1 = FUN_0046cde4(param_1);
    if ((char)uVar1 != '\0') {
      iVar3 = -0x10;
      pHVar2 = (HWND)FUN_0046cae0(param_1);
      uVar1 = GetWindowLongA(pHVar2,iVar3);
      uVar1 = uVar1 & 0xfffffffc | *(uint *)(&DAT_00662d98 + (uint)*(byte *)(param_1 + 0x215) * 4);
      iVar3 = -0x10;
      pHVar2 = (HWND)FUN_0046cae0(param_1);
      SetWindowLongA(pHVar2,iVar3,uVar1);
      FUN_004521fc(param_1);
      uVar1 = (uint)(byte)(*(byte *)(param_1 + 0x215) - 2);
      if (*(byte *)(param_1 + 0x215) < 2) {
        if (*(char *)(*(int *)(param_1 + 0x234) + 8) == '\0') {
          uVar1 = FUN_004521dc(param_1,3);
        }
        else {
          uVar1 = FUN_004521dc(param_1,1);
        }
      }
    }
  }
  return uVar1;
}

