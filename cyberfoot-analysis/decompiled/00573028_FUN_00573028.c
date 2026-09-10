// Address: 00573028
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00573028(undefined4 param_1,int param_2,undefined4 param_3,int param_4)

{
  int *piVar1;
  int iVar2;
  undefined4 unaff_EBX;
  undefined4 unaff_EDI;
  undefined4 *in_FS_OFFSET;
  wchar_t *pwVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  wchar_t *pwVar6;
  wchar_t *local_34;
  undefined1 **local_30;
  undefined4 local_2c;
  undefined1 *local_28;
  wchar_t *local_24;
  wchar_t *local_14;
  undefined4 local_10;
  undefined4 local_c;
  wchar_t *local_8;
  
  local_24 = (wchar_t *)&stack0xfffffffc;
  local_14 = (wchar_t *)0x5;
  do {
    local_c = 0;
    local_14 = (wchar_t *)((int)local_14 + -1);
  } while (local_14 != (wchar_t *)0x0);
  LOCK();
  UNLOCK();
  local_28 = &LAB_005732e4;
  local_2c = *in_FS_OFFSET;
  *in_FS_OFFSET = &local_2c;
  local_30 = (undefined1 **)0x57305d;
  local_8 = local_14;
  piVar1 = (int *)FUN_00403a54(PTR_PTR_0041bda0,1);
  local_30 = (undefined1 **)0x573075;
  FUN_00405194(&local_c,*(undefined4 *)PTR_DAT_0066b5b8);
  local_30 = (undefined1 **)0x57307d;
  FUN_00404ff0(&local_14);
  local_30 = (undefined1 **)0x573085;
  FUN_00404ff0(&stack0xffffffe8);
  local_30 = (undefined1 **)0x57308d;
  FUN_00404ff0(&local_8);
  local_30 = (undefined1 **)0x573098;
  FUN_00404b6c(&stack0xffffffe0,local_c);
  local_30 = (undefined1 **)0x5730ab;
  iVar2 = FUN_0042b3e4(*(undefined4 *)(DAT_006d1fcc + 0x160),unaff_EDI);
  if (iVar2 < 0x38) {
    local_30 = (undefined1 **)0x5730bb;
    thunk_FUN_0040502c(&local_8,local_c);
  }
  else {
    local_30 = (undefined1 **)0x5730ca;
    iVar2 = FUN_00405574(&DAT_005732f8,local_c);
    if (iVar2 == 0) {
      local_30 = (undefined1 **)0x5730de;
      thunk_FUN_0040502c(&local_8,local_c);
    }
    else {
      local_30 = (undefined1 **)&local_24;
      local_34 = L"痿棠㋸W䖍僜喋䋨ƹ";
      FUN_004053fc(local_c,0,iVar2 + -1);
      local_30 = (undefined1 **)local_24;
      local_34 = L" ";
      FUN_004053fc(local_c,iVar2 + 1,1,&local_28);
      FUN_00405330(&local_8,4);
    }
  }
  if (param_2 < 0xc) {
    local_30 = (undefined1 **)0x573142;
    thunk_FUN_0040502c(&local_10,*(undefined4 *)(PTR_DAT_0066b6bc + param_4 * 4 + -4));
    if (*(int *)(*(int *)PTR_DAT_0066b5b8 + 0x24) ==
        *(int *)(PTR_DAT_0066b734 + param_4 * 0xc + -0xc)) {
      local_30 = (undefined1 **)0x5731da;
      FUN_004048d4(*(int *)(&DAT_006d1f80 + param_2 * 4) + 0x80);
    }
    else {
      local_30 = (undefined1 **)0x573170;
      thunk_FUN_0040502c(&local_14,L"<FONT color=\"#DFDF00\">");
      local_30 = (undefined1 **)0x57317d;
      thunk_FUN_0040502c(&stack0xffffffe8,L"</font>");
      local_30 = *(undefined1 ***)(PTR_DAT_0066b660 + *(int *)(*(int *)PTR_DAT_0066b5b8 + 0x24) * 4)
      ;
      local_34 = L" improvisado como ";
      FUN_00405330(&local_2c,3);
      local_30 = (undefined1 **)0x5731c7;
      FUN_00404b6c(*(int *)(&DAT_006d1f80 + param_2 * 4) + 0x80,local_2c);
    }
    if ((*(int *)(*(int *)PTR_DAT_0066b5b8 + 0x24) == 3) && ((param_4 == 10 || (param_4 == 0x11))))
    {
      local_30 = (undefined1 **)0x573200;
      FUN_00404ff0(&local_14);
      local_30 = (undefined1 **)0x573208;
      FUN_00404ff0(&stack0xffffffe8);
      local_30 = (undefined1 **)0x573219;
      FUN_004048d4(*(int *)(&DAT_006d1f80 + param_2 * 4) + 0x80);
    }
  }
  else {
    local_30 = (undefined1 **)0x57323b;
    thunk_FUN_0040502c(&local_10,
                       *(undefined4 *)
                        (PTR_DAT_0066b660 + *(int *)(*(int *)PTR_DAT_0066b5b8 + 0x24) * 4));
  }
  local_30 = (undefined1 **)0x57337c;
  local_34 = local_14;
  pwVar5 = L"</shad></B><BR><shad>";
  pwVar4 = L"</shad>";
  pwVar3 = L"</P>";
  pwVar6 = local_8;
  FUN_00405330(&local_34,8);
  FUN_00404b6c(&local_30,local_34);
  (**(code **)(*piVar1 + 0x38))
            (piVar1,local_30,*piVar1,pwVar3,unaff_EBX,pwVar4,local_10,pwVar5,pwVar6);
  (**(code **)(**(int **)(*(int *)(&DAT_006d1f80 + param_2 * 4) + 0x198) + 0x44))();
  FUN_004bb5c4(*(undefined4 *)(&DAT_006d1f80 + param_2 * 4),piVar1);
  (**(code **)(*piVar1 + 0x44))();
  *in_FS_OFFSET = pwVar3;
  FUN_00404ff0(&local_34,pwVar3,pwVar4,&LAB_005732eb);
  FUN_004048d4(&local_30);
  FUN_00405008(&local_2c,3);
  FUN_004048d4(&stack0xffffffe0);
  FUN_00405008(&stack0xffffffe8,5);
  return;
}

