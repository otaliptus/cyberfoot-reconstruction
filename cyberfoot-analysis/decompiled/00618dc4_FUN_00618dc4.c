// Address: 00618dc4
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00618dc4(undefined4 param_1,undefined4 param_2,int param_3,undefined4 param_4,uint param_5)

{
  int iVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_28;
  undefined1 *puStack_24;
  undefined1 *puStack_20;
  undefined4 local_10;
  undefined4 local_c;
  int local_8;
  
  puVar2 = PTR_DAT_0066ac78;
  puStack_20 = &stack0xfffffffc;
  local_c = 0;
  local_10 = 0;
  puStack_24 = &LAB_0061937b;
  uStack_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_28;
  puVar3 = &stack0xfffffffc;
  local_8 = param_3;
  if (*(int *)(puVar2 + 0x88) == 7) {
    iVar1 = *(int *)(puVar2 + 0x62c);
    puVar3 = &stack0xfffffffc;
    if (iVar1 < 4) {
      puVar3 = &stack0xfffffffc;
      switch(param_3) {
      case 1:
      case 7:
        puStack_20 = &stack0xfffffffc;
        FUN_004051d4(&local_c,*(undefined4 *)
                               (PTR_PTR_0066ae90 + *(int *)(puVar2 + 0x644) * 0x20 + -0x10));
        FUN_004051d4(&local_10,
                     *(undefined4 *)(PTR_PTR_0066ae90 + *(int *)(puVar2 + 0x644) * 0x20 + -0xc));
        puVar3 = puStack_20;
        break;
      case 2:
      case 5:
        puStack_20 = &stack0xfffffffc;
        FUN_004051d4(&local_c,*(undefined4 *)
                               (PTR_PTR_0066ae90 + *(int *)(puVar2 + 0x644) * 0x20 + -8));
        FUN_004051d4(&local_10,
                     *(undefined4 *)(PTR_PTR_0066ae90 + *(int *)(puVar2 + 0x644) * 0x20 + -4));
        puVar3 = puStack_20;
        break;
      case 3:
      case 6:
        puStack_20 = &stack0xfffffffc;
        FUN_004051d4(&local_c,*(undefined4 *)
                               (PTR_PTR_0066ae90 + *(int *)(puVar2 + 0x644) * 0x20 + -0x18));
        FUN_004051d4(&local_10,
                     *(undefined4 *)(PTR_PTR_0066ae90 + *(int *)(puVar2 + 0x644) * 0x20 + -0x14));
        puVar3 = puStack_20;
        break;
      case 4:
      case 8:
        FUN_004051d4(&local_c,*(undefined4 *)
                               (PTR_PTR_0066ae90 + *(int *)(puVar2 + 0x644) * 0x20 + -0x20));
        FUN_004051d4(&local_10,
                     *(undefined4 *)(PTR_PTR_0066ae90 + *(int *)(puVar2 + 0x644) * 0x20 + -0x1c));
        puVar3 = puStack_20;
      }
    }
    puStack_20 = puVar3;
    if (iVar1 < 4) {
      if ((param_5 & 1) == 0) {
        if ((*(int *)(puVar2 + 0x62c) == 1) || (*(int *)(puVar2 + 0x62c) == 3)) {
          thunk_FUN_0040502c(&local_c,local_10);
          puVar3 = puStack_20;
        }
        else {
          thunk_FUN_0040502c(&local_c,local_c);
          puVar3 = puStack_20;
        }
      }
      else if ((*(int *)(puVar2 + 0x62c) == 1) || (*(int *)(puVar2 + 0x62c) == 3)) {
        thunk_FUN_0040502c(&local_c,local_c);
        puVar3 = puStack_20;
      }
      else {
        thunk_FUN_0040502c(&local_c,local_10);
        puVar3 = puStack_20;
      }
    }
    else {
      FUN_004051d4(&local_c,*(undefined4 *)
                             (PTR_PTR_0066ae90 +
                             param_5 * 4 + *(int *)(puVar2 + 0x644) * 0x20 + -0x24));
      puVar3 = puStack_20;
    }
  }
  puStack_20 = puVar3;
  if (*(int *)(puVar2 + 0x88) == 8) {
    iVar1 = *(int *)(puVar2 + 0x62c);
    if (iVar1 < 4) {
      if (local_8 == 1) {
        FUN_004051d4(&local_c,*(undefined4 *)
                               (PTR_DAT_0066b368 + *(int *)(puVar2 + 0x644) * 0x10 + -0x10));
        FUN_004051d4(&local_10,
                     *(undefined4 *)(PTR_DAT_0066b368 + *(int *)(puVar2 + 0x644) * 0x10 + -0xc));
      }
      else if (local_8 == 2) {
        FUN_004051d4(&local_c,*(undefined4 *)
                               (PTR_DAT_0066b368 + *(int *)(puVar2 + 0x644) * 0x10 + -8));
        FUN_004051d4(&local_10,
                     *(undefined4 *)(PTR_DAT_0066b368 + *(int *)(puVar2 + 0x644) * 0x10 + -4));
      }
      else if (local_8 - 3U < 2) {
        FUN_004051d4(&local_c,*(undefined4 *)
                               (PTR_DAT_0066b368 + *(int *)(puVar2 + 0x644) * 0x10 + -0x10));
        FUN_004051d4(&local_10,
                     *(undefined4 *)(PTR_DAT_0066b368 + *(int *)(puVar2 + 0x644) * 0x10 + -0xc));
      }
    }
    if (iVar1 == 4) {
      if (param_5 == 1) {
        FUN_004051d4(&local_c,*(undefined4 *)
                               (PTR_DAT_0066b368 + *(int *)(puVar2 + 0x644) * 0x10 + -0x10));
      }
      else if (param_5 == 2) {
        FUN_004051d4(&local_c,*(undefined4 *)
                               (PTR_DAT_0066b368 + *(int *)(puVar2 + 0x644) * 0x10 + -0xc));
      }
      else if (param_5 == 3) {
        FUN_004051d4(&local_c,*(undefined4 *)
                               (PTR_DAT_0066b368 + *(int *)(puVar2 + 0x644) * 0x10 + -8));
      }
      else if (param_5 == 4) {
        FUN_004051d4(&local_c,*(undefined4 *)
                               (PTR_DAT_0066b368 + *(int *)(puVar2 + 0x644) * 0x10 + -4));
      }
    }
    if (iVar1 == 5) {
      if (param_5 == 1) {
        FUN_004051d4(&local_c,*(undefined4 *)
                               (PTR_DAT_0066b368 + *(int *)(puVar2 + 0x644) * 0x10 + -0x10));
      }
      else if (param_5 == 2) {
        FUN_004051d4(&local_c,*(undefined4 *)
                               (PTR_DAT_0066b368 + *(int *)(puVar2 + 0x644) * 0x10 + -0xc));
      }
    }
    if (iVar1 == 6) {
      if (param_5 == 1) {
        FUN_004051d4(&local_c,*(undefined4 *)
                               (PTR_DAT_0066b368 + *(int *)(puVar2 + 0x644) * 0x10 + -0x10));
      }
      else if (param_5 == 2) {
        FUN_004051d4(&local_c,*(undefined4 *)
                               (PTR_DAT_0066b368 + *(int *)(puVar2 + 0x644) * 0x10 + -0xc));
      }
    }
  }
  if (*(int *)(puVar2 + 0x88) == 9) {
    iVar1 = *(int *)(puVar2 + 0x62c);
    if (iVar1 < 4) {
      if (local_8 == 1) {
        FUN_004051d4(&local_c,*(undefined4 *)
                               (PTR_DAT_0066b06c + *(int *)(puVar2 + 0x644) * 0x10 + -0x10));
        FUN_004051d4(&local_c,*(undefined4 *)
                               (PTR_DAT_0066b06c + *(int *)(puVar2 + 0x644) * 0x10 + -0xc));
      }
      else if (local_8 == 2) {
        FUN_004051d4(&local_c,*(undefined4 *)
                               (PTR_DAT_0066b06c + *(int *)(puVar2 + 0x644) * 0x10 + -8));
        FUN_004051d4(&local_c,*(undefined4 *)
                               (PTR_DAT_0066b06c + *(int *)(puVar2 + 0x644) * 0x10 + -4));
      }
      else if (local_8 - 3U < 2) {
        FUN_004051d4(&local_c,*(undefined4 *)
                               (PTR_DAT_0066b06c + *(int *)(puVar2 + 0x644) * 0x10 + -0x10));
        FUN_004051d4(&local_c,*(undefined4 *)
                               (PTR_DAT_0066b06c + *(int *)(puVar2 + 0x644) * 0x10 + -0xc));
      }
    }
    if (iVar1 == 4) {
      if (param_5 == 1) {
        FUN_004051d4(&local_c,*(undefined4 *)
                               (PTR_DAT_0066b06c + *(int *)(puVar2 + 0x644) * 0x10 + -0x10));
      }
      else if (param_5 == 2) {
        FUN_004051d4(&local_c,*(undefined4 *)
                               (PTR_DAT_0066b06c + *(int *)(puVar2 + 0x644) * 0x10 + -0xc));
      }
      else if (param_5 == 3) {
        FUN_004051d4(&local_c,*(undefined4 *)
                               (PTR_DAT_0066b06c + *(int *)(puVar2 + 0x644) * 0x10 + -8));
      }
      else if (param_5 == 4) {
        FUN_004051d4(&local_c,*(undefined4 *)
                               (PTR_DAT_0066b06c + *(int *)(puVar2 + 0x644) * 0x10 + -4));
      }
    }
    if (iVar1 == 5) {
      if (param_5 == 1) {
        FUN_004051d4(&local_c,*(undefined4 *)
                               (PTR_DAT_0066b06c + *(int *)(puVar2 + 0x644) * 0x10 + -0x10));
      }
      else if (param_5 == 2) {
        FUN_004051d4(&local_c,*(undefined4 *)
                               (PTR_DAT_0066b06c + *(int *)(puVar2 + 0x644) * 0x10 + -0xc));
      }
    }
    if (iVar1 == 6) {
      if (param_5 == 1) {
        FUN_004051d4(&local_c,*(undefined4 *)
                               (PTR_DAT_0066b06c + *(int *)(puVar2 + 0x644) * 0x10 + -0x10));
      }
      else if (param_5 == 2) {
        FUN_004051d4(&local_c,*(undefined4 *)
                               (PTR_DAT_0066b06c + *(int *)(puVar2 + 0x644) * 0x10 + -0xc));
      }
    }
  }
  FUN_0040502c(param_4,local_c);
  puVar3 = puStack_20;
  *in_FS_OFFSET = uStack_28;
  puStack_20 = &LAB_00619382;
  puStack_24 = (undefined1 *)0x61937a;
  FUN_00405008(&local_10,2,puVar3);
  return;
}

