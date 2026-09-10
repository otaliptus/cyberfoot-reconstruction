// Address: 004742a0
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004742a0(int param_1,int param_2,int param_3,char param_4,UINT param_5,int param_6,
                 int param_7)

{
  char cVar1;
  COLORREF CVar2;
  COLORREF CVar3;
  HDC pHVar4;
  HIMAGELIST p_Var5;
  int *piVar6;
  int iVar7;
  undefined4 uVar8;
  int iVar9;
  int dx;
  int iVar10;
  int dy;
  undefined1 *puVar11;
  UINT fStyle;
  undefined1 local_2c [16];
  undefined1 local_1c [16];
  HDC local_c;
  int local_8;
  
  local_8 = param_2;
  cVar1 = FUN_004739fc(param_1);
  if (cVar1 != '\0') {
    if (param_4 == '\0') {
      if (*(int *)(param_1 + 0x54) == 0) {
        piVar6 = (int *)FUN_0042fcb8(PTR_PTR_00429378,1);
        *(int **)(param_1 + 0x54) = piVar6;
        FUN_0043113c(piVar6,1);
        (**(code **)(*piVar6 + 0x40))(piVar6,*(undefined4 *)(param_1 + 0x34));
        (**(code **)(*piVar6 + 0x34))(piVar6,*(undefined4 *)(param_1 + 0x30));
      }
      iVar7 = FUN_00430280(*(undefined4 *)(param_1 + 0x54));
      FUN_0042ab6c(*(undefined4 *)(iVar7 + 0x14),0xffffff);
      FUN_0041c990(0,0,*(undefined4 *)(param_1 + 0x34),local_2c,*(undefined4 *)(param_1 + 0x30));
      puVar11 = local_2c;
      uVar8 = FUN_00430280(*(undefined4 *)(param_1 + 0x54));
      FUN_0042af8c(uVar8,puVar11);
      fStyle = 0;
      CVar3 = 0;
      CVar2 = 0xffffffff;
      dy = 0;
      dx = 0;
      iVar10 = 0;
      iVar9 = 0;
      FUN_00430280(*(undefined4 *)(param_1 + 0x54));
      pHVar4 = (HDC)FUN_0042b5a8();
      iVar7 = local_8;
      p_Var5 = (HIMAGELIST)FUN_00473bd0(param_1);
      ImageList_DrawEx(p_Var5,iVar7,pHVar4,iVar9,iVar10,dx,dy,CVar2,CVar3,fStyle);
      FUN_0041c990(param_7,param_6,param_7 + *(int *)(param_1 + 0x34),local_1c,
                   param_6 + *(int *)(param_1 + 0x30));
      FUN_00430280(*(undefined4 *)(param_1 + 0x54));
      local_c = (HDC)FUN_0042b5a8();
      FUN_0042ab6c(*(undefined4 *)(param_3 + 0x14),0xff000014);
      pHVar4 = (HDC)FUN_0042b5a8(param_3);
      SetTextColor(pHVar4,0xffffff);
      SetBkColor(pHVar4,0);
      BitBlt(pHVar4,param_7 + 1,param_6 + 1,*(int *)(param_1 + 0x34),*(int *)(param_1 + 0x30),
             local_c,0,0,0xe20746);
      FUN_0042ab6c(*(undefined4 *)(param_3 + 0x14),0xff000010);
      pHVar4 = (HDC)FUN_0042b5a8(param_3);
      SetTextColor(pHVar4,0xffffff);
      SetBkColor(pHVar4,0);
      BitBlt(pHVar4,param_7,param_6,*(int *)(param_1 + 0x34),*(int *)(param_1 + 0x30),local_c,0,0,
             0xe20746);
    }
    else {
      CVar2 = FUN_004737f8(*(undefined4 *)(param_1 + 0x48));
      FUN_00474278(param_1);
      CVar3 = FUN_004737f8();
      iVar10 = 0;
      iVar9 = 0;
      pHVar4 = (HDC)FUN_0042b5a8(param_3);
      iVar7 = local_8;
      p_Var5 = (HIMAGELIST)FUN_00473bd0(param_1);
      ImageList_DrawEx(p_Var5,iVar7,pHVar4,param_7,param_6,iVar9,iVar10,CVar3,CVar2,param_5);
    }
  }
  return;
}

