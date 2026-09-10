// Address: 0043e684
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0043e684(int param_1,undefined4 param_2,int *param_3,char param_4,undefined4 param_5)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  HDC pHVar7;
  HIMAGELIST p_Var8;
  char cVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  COLORREF CVar13;
  COLORREF CVar14;
  int *piVar15;
  UINT UVar16;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  undefined1 local_18 [12];
  int *local_c;
  undefined4 local_8;
  
  if (*(int *)(param_1 + 4) != 0) {
    local_c = param_3;
    local_8 = param_2;
    iVar2 = (**(code **)(**(int **)(param_1 + 4) + 0x2c))();
    if (iVar2 != 0) {
      iVar2 = (**(code **)(**(int **)(param_1 + 4) + 0x20))();
      if (iVar2 != 0) {
        iVar2 = FUN_0043e0ac(param_1,param_5);
        FUN_00456c14();
        cVar1 = FUN_00456cf4();
        cVar9 = (char)param_5;
        if (cVar1 == '\0') {
          if ((param_4 == '\0') && (cVar9 != '\x03')) {
            UVar16 = 0;
            CVar14 = 0x1fffffff;
            CVar13 = FUN_00429e64(0xff00000f);
            iVar12 = 0;
            iVar11 = 0;
            iVar3 = local_c[1];
            iVar10 = *local_c;
            pHVar7 = (HDC)FUN_0042b5a8(local_8);
            p_Var8 = (HIMAGELIST)FUN_00473bd0(*(undefined4 *)(param_1 + 8));
            ImageList_DrawEx(p_Var8,iVar2,pHVar7,iVar10,iVar3,iVar11,iVar12,CVar13,CVar14,UVar16);
          }
          else {
            UVar16 = 1;
            CVar14 = 0x1fffffff;
            CVar13 = 0x1fffffff;
            iVar12 = 0;
            iVar11 = 0;
            iVar3 = local_c[1];
            iVar10 = *local_c;
            pHVar7 = (HDC)FUN_0042b5a8(local_8);
            p_Var8 = (HIMAGELIST)FUN_00473bd0(*(undefined4 *)(param_1 + 8));
            ImageList_DrawEx(p_Var8,iVar2,pHVar7,iVar10,iVar3,iVar11,iVar12,CVar13,CVar14,UVar16);
          }
        }
        else {
          local_28 = *local_c;
          local_24 = local_c[1];
          iVar3 = (**(code **)(**(int **)(param_1 + 4) + 0x2c))();
          local_20 = iVar3 / (int)(uint)*(byte *)(param_1 + 0x20) + local_28;
          local_1c = (**(code **)(**(int **)(param_1 + 4) + 0x20))();
          local_1c = local_1c + local_24;
          if (cVar9 == '\x01') {
            uVar5 = 5;
          }
          else if ((byte)(cVar9 - 2U) < 2) {
            uVar5 = 4;
          }
          else {
            uVar5 = 2;
          }
          uVar4 = FUN_00456c14();
          FUN_00456ef4(uVar4,uVar5,local_18);
          piVar15 = &local_28;
          uVar5 = FUN_00473bd0(*(undefined4 *)(param_1 + 8));
          uVar4 = FUN_0042b5a8(local_8);
          uVar6 = FUN_00456c14();
          FUN_00456e44(uVar6,uVar4,local_18,iVar2,uVar5,piVar15);
        }
      }
    }
  }
  return;
}

