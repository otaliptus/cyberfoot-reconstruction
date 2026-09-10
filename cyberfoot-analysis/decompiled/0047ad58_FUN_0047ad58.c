// Address: 0047ad58
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0047ad58(int param_1,UINT *param_2)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  UINT UVar6;
  undefined2 extraout_var;
  int iVar7;
  int *in_FS_OFFSET;
  undefined1 *puVar8;
  int iStack_4c;
  undefined1 *puStack_48;
  undefined1 *puStack_44;
  undefined4 local_34;
  int *local_30;
  UINT local_2c;
  UINT local_28;
  UINT local_24;
  HDC local_20;
  int local_1c;
  undefined4 local_18;
  char local_11;
  int *local_10;
  HMENU local_c;
  int local_8;
  
  puStack_44 = &stack0xfffffffc;
  puVar8 = &stack0xfffffffc;
  local_34 = 0;
  puStack_48 = &LAB_0047b28b;
  iStack_4c = *in_FS_OFFSET;
  *in_FS_OFFSET = (int)&iStack_4c;
  UVar6 = *param_2;
  local_8 = param_1;
  if ((int)UVar6 < 0x112) {
    if (UVar6 == 0x111) {
      iVar5 = *(int *)(param_1 + 8);
      puStack_44 = &stack0xfffffffc;
      if (-1 < iVar5 + -1) {
        iVar7 = 0;
        puStack_44 = &stack0xfffffffc;
        do {
          uVar4 = FUN_0041e01c(local_8,iVar7);
          cVar1 = FUN_0047a040(uVar4,CONCAT22(extraout_var,(short)param_2[1]));
          if (cVar1 != '\0') goto LAB_0047b275;
          iVar7 = iVar7 + 1;
          iVar5 = iVar5 + -1;
        } while (iVar5 != 0);
      }
    }
    else if (UVar6 == 0x2b) {
      local_28 = param_2[2];
      iVar5 = *(int *)(param_1 + 8);
      puStack_44 = &stack0xfffffffc;
      if (-1 < iVar5 + -1) {
        iVar7 = 0;
        puStack_44 = &stack0xfffffffc;
        do {
          uVar4 = FUN_0041e01c(local_8,iVar7);
          local_10 = (int *)FUN_00479fa0(uVar4,*(undefined4 *)(local_28 + 8),0);
          if (local_10 != (int *)0x0) {
            local_18 = FUN_0042acbc(PTR_PTR_00460cd4,1);
            *in_FS_OFFSET = (int)&stack0xffffffa8;
            local_1c = SaveDC(*(HDC *)(local_28 + 0x18));
            iVar5 = *in_FS_OFFSET;
            *in_FS_OFFSET = (int)&stack0xffffff9c;
            FUN_0042b628(local_18,*(undefined4 *)(local_28 + 0x18));
            FUN_0042b4a4(local_18,*(undefined4 *)(*(int *)PTR_DAT_0066b760 + 0x88));
            FUN_0047b530(local_10,local_18,local_28 + 0x1c);
            *in_FS_OFFSET = iVar5;
            FUN_0042b628(local_18,0,puVar8);
            RestoreDC(*(HDC *)(local_28 + 0x18),local_1c);
            return;
          }
          iVar7 = iVar7 + 1;
          iVar5 = iVar5 + -1;
          local_10 = (int *)0x0;
        } while (iVar5 != 0);
        local_10 = (int *)0x0;
      }
    }
    else if (UVar6 == 0x2c) {
      local_2c = param_2[2];
      iVar5 = *(int *)(param_1 + 8);
      puStack_44 = &stack0xfffffffc;
      if (-1 < iVar5 + -1) {
        iVar7 = 0;
        puStack_44 = &stack0xfffffffc;
        do {
          uVar4 = FUN_0041e01c(local_8,iVar7);
          local_10 = (int *)FUN_00479fa0(uVar4,*(undefined4 *)(local_2c + 8),0);
          if (local_10 != (int *)0x0) {
            local_20 = GetWindowDC(*(HWND *)(local_8 + 0x10));
            *in_FS_OFFSET = (int)&stack0xffffffa8;
            local_18 = FUN_0042acbc(PTR_PTR_00460cd4,1);
            *in_FS_OFFSET = (int)&stack0xffffff9c;
            local_1c = SaveDC(local_20);
            *in_FS_OFFSET = (int)&stack0xffffff90;
            FUN_0042b628(local_18,local_20);
            FUN_0042b4a4(local_18,*(undefined4 *)(*(int *)PTR_DAT_0066b760 + 0x88));
            iVar5 = local_2c + 0x10;
            (**(code **)(*local_10 + 0x38))(local_10,local_18,local_2c + 0xc);
            *in_FS_OFFSET = iVar5;
            FUN_0042b628(local_18,0,&LAB_0047b1bf);
            RestoreDC(local_20,local_1c);
            return;
          }
          iVar7 = iVar7 + 1;
          iVar5 = iVar5 + -1;
          local_10 = (int *)0x0;
        } while (iVar5 != 0);
        local_10 = (int *)0x0;
      }
    }
    else if (UVar6 == 0x53) {
      local_24 = param_2[2];
      iVar5 = *(int *)(param_1 + 8);
      puStack_44 = &stack0xfffffffc;
      if (-1 < iVar5 + -1) {
        iVar7 = 0;
        puStack_44 = &stack0xfffffffc;
        do {
          piVar2 = (int *)FUN_0041e01c(local_8,iVar7);
          iVar3 = (**(code **)(*piVar2 + 0x34))();
          if (iVar3 == *(int *)(local_24 + 0xc)) {
            iVar3 = FUN_0041e01c(local_8,iVar7);
            local_10 = *(int **)(iVar3 + 0x34);
          }
          else {
            uVar4 = FUN_0041e01c(local_8,iVar7);
            local_10 = (int *)FUN_00479fa0(uVar4,*(undefined4 *)(local_24 + 0xc),1);
          }
          if (local_10 != (int *)0x0) {
            uVar4 = FUN_0041e01c(local_8,iVar7);
            iVar5 = FUN_00479fd0(uVar4,*(undefined4 *)(local_24 + 8),1);
            if (iVar5 == 0) {
              uVar4 = FUN_0041e01c(local_8,iVar7);
              iVar5 = FUN_00479fd0(uVar4,*(undefined4 *)(local_24 + 0xc),0);
            }
            iVar7 = *(int *)(*(int *)PTR_DAT_0066b760 + 0x6c);
            if (iVar7 != 0) {
              if (iVar5 == 0) {
                iVar5 = *(int *)(iVar7 + 0x158);
              }
              if ((*(byte *)(iVar7 + 0x228) & 8) == 0) {
                FUN_00487a94(*(undefined4 *)PTR_DAT_0066b3ac,iVar5,PTR_DAT_0066b760);
              }
              else {
                FUN_00487afc(*(undefined4 *)PTR_DAT_0066b3ac,8,iVar5);
              }
            }
            goto LAB_0047b275;
          }
          iVar7 = iVar7 + 1;
          iVar5 = iVar5 + -1;
        } while (iVar5 != 0);
      }
    }
  }
  else if (UVar6 == 0x117) {
    iVar5 = *(int *)(param_1 + 8);
    puStack_44 = &stack0xfffffffc;
    if (-1 < iVar5 + -1) {
      iVar7 = 0;
      puStack_44 = &stack0xfffffffc;
      do {
        uVar4 = FUN_0041e01c(local_8,iVar7);
        cVar1 = FUN_0047a05c(uVar4,param_2[1]);
        if (cVar1 != '\0') goto LAB_0047b275;
        iVar7 = iVar7 + 1;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
    }
  }
  else if (UVar6 == 0x11f) {
    local_11 = (*(byte *)((int)param_2 + 6) & 0x10) != 0;
    iVar5 = *(int *)(param_1 + 8);
    puStack_44 = &stack0xfffffffc;
    if (-1 < iVar5 + -1) {
      iVar7 = 0;
      puStack_44 = &stack0xfffffffc;
      piVar2 = local_10;
      do {
        local_10 = piVar2;
        if (local_11 == '\x01') {
          if ((HMENU)param_2[2] == (HMENU)0x0) {
            local_c = (HMENU)0xffffffff;
          }
          else {
            local_c = GetSubMenu((HMENU)param_2[2],(uint)(ushort)param_2[1]);
          }
        }
        else {
          local_c = (HMENU)(uint)(ushort)param_2[1];
        }
        uVar4 = FUN_0041e01c(local_8,iVar7);
        local_10 = (int *)FUN_00479fa0(uVar4,local_c,local_11);
        if (local_10 != (int *)0x0) {
          FUN_00463318(*(undefined4 *)((int)local_10 + 0x58),&local_34);
          FUN_00487e00(*(undefined4 *)PTR_DAT_0066b3ac,local_34);
          goto LAB_0047b275;
        }
        iVar7 = iVar7 + 1;
        iVar5 = iVar5 + -1;
        piVar2 = (int *)0;
      } while (iVar5 != 0);
    }
    FUN_00487e00(*(undefined4 *)PTR_DAT_0066b3ac,0);
  }
  else {
    puStack_44 = &stack0xfffffffc;
    if ((UVar6 == 0x120) &&
       (iVar5 = *(int *)(param_1 + 8), puStack_44 = &stack0xfffffffc, -1 < iVar5 + -1)) {
      iVar7 = 0;
      puStack_44 = &stack0xfffffffc;
      do {
        local_30 = (int *)FUN_0041e01c(local_8,iVar7);
        UVar6 = (**(code **)(*local_30 + 0x34))();
        if ((UVar6 == param_2[2]) || (iVar3 = FUN_00479fa0(local_30,param_2[2],1), iVar3 != 0)) {
          FUN_0047a8a0(local_30,param_2);
          goto LAB_0047b275;
        }
        iVar7 = iVar7 + 1;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
    }
  }
  UVar6 = DefWindowProcA(*(HWND *)(local_8 + 0x10),*param_2,param_2[1],param_2[2]);
  param_2[3] = UVar6;
LAB_0047b275:
  puVar8 = puStack_44;
  *in_FS_OFFSET = iStack_4c;
  puStack_44 = &LAB_0047b292;
  puStack_48 = (undefined1 *)0x47b28a;
  FUN_004048d4(&local_34,iStack_4c,puVar8);
  return;
}

