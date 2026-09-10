// Address: 005041d0
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

int FUN_005041d0(int *param_1,undefined4 param_2,int param_3)

{
  POINT pt;
  char cVar1;
  BOOL BVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  RECT local_38;
  LONG local_28;
  LONG local_24;
  undefined1 local_20 [4];
  int local_1c;
  
  FUN_0050f004(param_1,&local_38);
  local_38.left = 0;
  FUN_004070b8(param_2,param_3,&local_28);
  pt.y = local_24;
  pt.x = local_28;
  BVar2 = PtInRect(&local_38,pt);
  if (BVar2 != 0) {
    FUN_0050f004(param_1,local_20);
    iVar6 = local_1c;
    for (iVar5 = param_1[0x136]; iVar4 = (**(code **)(*param_1 + 0x11c))(), iVar5 <= iVar4 + -1;
        iVar5 = iVar5 + 1) {
      cVar1 = (**(code **)(*param_1 + 300))(param_1,iVar5);
      if (cVar1 != '\0') {
        iVar4 = (**(code **)(*param_1 + 0x120))(param_1,iVar5);
        iVar3 = FUN_0050f404(param_1,1);
        iVar6 = iVar6 + iVar4 + iVar3;
        if (param_3 <= iVar6) {
          return iVar5;
        }
        iVar4 = FUN_0050f404(param_1,CONCAT31((int3)((uint)(iVar4 + iVar3) >> 8),3));
        iVar6 = iVar6 + iVar4;
      }
    }
  }
  return -1;
}

