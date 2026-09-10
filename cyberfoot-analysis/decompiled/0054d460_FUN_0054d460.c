// Address: 0054d460
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0054d460(undefined4 param_1,undefined4 param_2,int *param_3,char param_4,char param_5)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  HDC pHVar8;
  HIMAGELIST p_Var9;
  undefined3 uVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  COLORREF CVar14;
  COLORREF CVar15;
  int *piVar16;
  UINT UVar17;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  undefined1 local_20 [12];
  int local_14;
  int *local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  local_10 = param_3;
  local_c = param_2;
  local_8 = param_1;
  iVar3 = FUN_0054d28c(param_1);
  piVar16 = *(int **)(iVar3 + 4);
  uVar6 = *(undefined4 *)(iVar3 + 8);
  if (piVar16 != (int *)0x0) {
    iVar4 = (**(code **)(*piVar16 + 0x2c))();
    if (iVar4 != 0) {
      iVar4 = (**(code **)(*piVar16 + 0x20))();
      if (iVar4 != 0) {
        local_14 = FUN_0054d420(local_8,param_5);
        FUN_00456c14();
        cVar1 = FUN_00456cf4();
        if (cVar1 == '\0') {
          if ((param_4 == '\0') && (param_5 != '\x03')) {
            UVar17 = 0;
            CVar15 = 0x1fffffff;
            CVar14 = FUN_00429e64(0xff00000f);
            iVar13 = 0;
            iVar12 = 0;
            iVar3 = local_10[1];
            iVar4 = *local_10;
            pHVar8 = (HDC)FUN_0042b5a8(local_c);
            iVar11 = local_14;
            p_Var9 = (HIMAGELIST)FUN_00473bd0(uVar6);
            ImageList_DrawEx(p_Var9,iVar11,pHVar8,iVar4,iVar3,iVar12,iVar13,CVar14,CVar15,UVar17);
          }
          else {
            UVar17 = 1;
            CVar15 = 0x1fffffff;
            CVar14 = 0x1fffffff;
            iVar13 = 0;
            iVar12 = 0;
            iVar3 = local_10[1];
            iVar4 = *local_10;
            pHVar8 = (HDC)FUN_0042b5a8(local_c);
            iVar11 = local_14;
            p_Var9 = (HIMAGELIST)FUN_00473bd0(uVar6);
            ImageList_DrawEx(p_Var9,iVar11,pHVar8,iVar4,iVar3,iVar12,iVar13,CVar14,CVar15,UVar17);
          }
        }
        else {
          local_30 = *local_10;
          local_2c = local_10[1];
          iVar4 = (**(code **)(*piVar16 + 0x2c))();
          local_28 = iVar4 / (int)(uint)*(byte *)(iVar3 + 0x20) + local_30;
          local_24 = (**(code **)(*piVar16 + 0x20))();
          local_24 = local_24 + local_2c;
          iVar3 = CONCAT31((int3)((uint)local_24 >> 8),param_5 + -1);
          uVar10 = (undefined3)((uint)piVar16 >> 8);
          if ((char)(param_5 + -1) == '\0') {
            uVar7 = CONCAT31(uVar10,5);
          }
          else {
            bVar2 = (byte)(iVar3 + -1);
            iVar3 = CONCAT31((int3)((uint)(iVar3 + -1) >> 8),bVar2 - 2);
            if (bVar2 < 2) {
              uVar7 = CONCAT31(uVar10,4);
            }
            else {
              uVar7 = CONCAT31(uVar10,2);
            }
          }
          uVar5 = FUN_00456c14(iVar3);
          FUN_00456ef4(uVar5,uVar7,local_20);
          piVar16 = &local_30;
          uVar6 = FUN_00473bd0(uVar6);
          iVar3 = local_14;
          uVar7 = FUN_0042b5a8(local_c);
          uVar5 = FUN_00456c14();
          FUN_00456e44(uVar5,uVar7,local_20,iVar3,uVar6,piVar16);
        }
      }
    }
  }
  return;
}

