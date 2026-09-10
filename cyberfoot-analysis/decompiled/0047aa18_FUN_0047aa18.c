// Address: 0047aa18
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

int FUN_0047aa18(undefined4 param_1,HMENU param_2,UINT param_3,UINT param_4,int param_5,
                LPSTR param_6)

{
  char cVar1;
  UINT UVar2;
  HMENU pHVar3;
  int iVar4;
  undefined4 local_8;
  
  cVar1 = FUN_0047a124(param_1);
  if (cVar1 == '\0') {
    iVar4 = GetMenuStringA(param_2,param_3,param_6,param_5,param_4);
  }
  else {
    local_8 = 0;
    UVar2 = GetMenuState(param_2,param_3,param_4);
    if ((UVar2 & 0x10) == 0) {
      UVar2 = GetMenuItemID(param_2,param_3);
      if (UVar2 != 0xffffffff) {
        local_8 = FUN_00479fa0(param_1,UVar2,0);
      }
    }
    else {
      pHVar3 = GetSubMenu(param_2,param_3);
      local_8 = FUN_00479fa0(param_1,pHVar3,1);
    }
    if (local_8 == 0) {
      iVar4 = 0;
    }
    else {
      *param_6 = '\0';
      FUN_0040a81c(param_6,*(undefined4 *)(local_8 + 0x30),param_5);
      iVar4 = FUN_0040a760(param_6);
    }
  }
  return iVar4;
}

