// Address: 0047a47c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0047a47c(HMENU param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  undefined1 *puVar2;
  UINT UVar3;
  UINT uId;
  
  iVar1 = GetMenuItemCount(param_1);
  puVar2 = (undefined1 *)(param_4 + -0x200);
  uId = 0;
  while (((int)uId < iVar1 && (puVar2 < (undefined1 *)(param_4 + -5)))) {
    FUN_0047aa18(*(undefined4 *)(param_4 + -0x204),param_1,uId,0x400,(param_4 + -5) - (int)puVar2,
                 puVar2);
    puVar2 = (undefined1 *)FUN_0040a778(puVar2);
    UVar3 = GetMenuState(param_1,uId,0x400);
    if ((UVar3 & 2) != 0) {
      *puVar2 = 0x24;
      puVar2 = puVar2 + 1;
      *puVar2 = 0;
    }
    if ((UVar3 & 0x40) != 0) {
      *puVar2 = 0x40;
      puVar2 = puVar2 + 1;
      *puVar2 = 0;
    }
    if ((UVar3 & 1) != 0) {
      *puVar2 = 0x23;
      puVar2 = puVar2 + 1;
      *puVar2 = 0;
    }
    *puVar2 = 0x3b;
    puVar2 = puVar2 + 1;
    *puVar2 = 0;
    uId = uId + 1;
  }
  return;
}

