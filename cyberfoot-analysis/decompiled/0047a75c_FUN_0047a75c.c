// Address: 0047a75c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

undefined4 FUN_0047a75c(HMENU param_1,uint param_2,int param_3,undefined1 param_4,int param_5)

{
  HMENU pHVar1;
  UINT UVar2;
  undefined4 uVar3;
  int iVar4;
  
  iVar4 = 0;
  if ((param_2 & 0x10) == 0) {
    UVar2 = GetMenuItemID(param_1,param_3);
    if (UVar2 != 0xffffffff) {
      iVar4 = FUN_00479fa0(*(undefined4 *)(param_5 + -4),UVar2,0);
    }
  }
  else {
    pHVar1 = GetSubMenu(param_1,param_3);
    iVar4 = FUN_00479fa0(*(undefined4 *)(param_5 + -4),pHVar1,1);
  }
  if (iVar4 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_0047e450(param_4,*(undefined4 *)(iVar4 + 0x30));
  }
  return uVar3;
}

