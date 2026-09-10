// Address: 004de880
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004de880(int param_1,undefined4 *param_2,undefined4 param_3,char param_4)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  LPCWSTR lpClassName;
  BOOL BVar3;
  undefined4 uVar4;
  HWND hWnd;
  LONG dwNewLong;
  undefined4 *in_FS_OFFSET;
  bool bVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  tagWNDCLASSW *lpWndClass;
  undefined4 uStack_48;
  undefined1 *puStack_44;
  undefined1 *puStack_40;
  tagWNDCLASSW local_38;
  undefined4 local_10;
  undefined4 *local_c;
  int local_8;
  
  puStack_40 = &stack0xfffffffc;
  local_10 = 0;
  puStack_44 = &LAB_004dea35;
  uStack_48 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_48;
  local_c = param_2;
  local_8 = param_1;
  if (*PTR_DAT_0066adfc == '\0') {
    puStack_40 = &stack0xfffffffc;
    uVar2 = FUN_00408118(param_2[2],param_2 + 0x13,*param_2,param_2[8],param_2[0xd],0,param_2[7],
                         param_2[6],param_2[5]);
    puVar1 = puStack_40;
    *(undefined4 *)(local_8 + 0x180) = uVar2;
    *in_FS_OFFSET = uStack_48;
    puStack_40 = &LAB_004dea3c;
    puStack_44 = (undefined1 *)0x4dea34;
    FUN_00404ff0(&local_10,uStack_48,puVar1);
    return;
  }
  bVar5 = true;
  FUN_00405378(param_3);
  if (!bVar5) {
    lpWndClass = &local_38;
    lpClassName = (LPCWSTR)FUN_00405250(param_3);
    BVar3 = GetClassInfoW((HINSTANCE)local_c[0xd],lpClassName,lpWndClass);
    if (BVar3 != 0) {
      *(WNDPROC *)(local_8 + 0x174) = local_38.lpfnWndProc;
      goto LAB_004de94d;
    }
  }
  *(code **)(local_8 + 0x174) = DefWindowProcW;
LAB_004de94d:
  uVar2 = FUN_00404ff0(&local_10);
  FUN_004de6e8(local_c,uVar2,param_4);
  DAT_0066971c = local_8;
  uVar2 = *in_FS_OFFSET;
  *in_FS_OFFSET = &stack0xffffffac;
  uVar14 = local_c[1];
  uVar13 = local_c[3];
  uVar12 = local_c[4];
  uVar11 = local_c[5];
  uVar10 = local_c[6];
  uVar9 = local_c[7];
  uVar8 = 0;
  uVar6 = local_c[8];
  uVar7 = DAT_0066c668;
  uVar4 = FUN_00405250(local_10);
  hWnd = (HWND)FUN_00408170(local_c[2],uVar4,0,uVar6,uVar7,uVar8,uVar9,uVar10,uVar11,uVar12,uVar13,
                            uVar14);
  if (hWnd == (HWND)0x0) {
    FUN_0040f904();
  }
  *(HWND *)(local_8 + 0x180) = hWnd;
  if (param_4 != '\0') {
    dwNewLong = GetWindowLongA(hWnd,-4);
    SetWindowLongW(hWnd,-4,dwNewLong);
  }
  *in_FS_OFFSET = uVar2;
  DAT_0066971c = 0;
  return;
}

