// Address: 0042ae64
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0042ae64(int *param_1,int param_2,int param_3,int *param_4)

{
  char cVar1;
  COLORREF CVar2;
  int iVar3;
  int iVar4;
  undefined1 *puVar5;
  undefined1 local_18 [16];
  int local_8;
  
  if (param_4 != (int *)0x0) {
    local_8 = param_3;
    cVar1 = (**(code **)(*param_4 + 0x1c))();
    if (cVar1 == '\0') {
      (**(code **)(*param_1 + 0x10))();
      FUN_0042b67c(param_1,DAT_0042af0c);
      FUN_0042ab64(param_1[5]);
      CVar2 = FUN_00429e64();
      SetBkColor((HDC)param_1[1],CVar2);
      CVar2 = FUN_00429e64(*(undefined4 *)(param_1[3] + 0x18));
      SetTextColor((HDC)param_1[1],CVar2);
      iVar3 = (**(code **)(*param_4 + 0x20))();
      iVar3 = iVar3 + local_8;
      puVar5 = local_18;
      iVar4 = (**(code **)(*param_4 + 0x2c))();
      FUN_0041c990(param_2,local_8,iVar4 + param_2,puVar5,iVar3);
      (**(code **)(*param_4 + 0x14))(param_4,param_1,local_18);
      (**(code **)(*param_1 + 0xc))();
    }
  }
  return;
}

