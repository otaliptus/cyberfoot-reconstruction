// Address: 0051a710
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

undefined1 FUN_0051a710(int *param_1)

{
  int iVar1;
  int *piVar2;
  byte bVar3;
  int extraout_EDX;
  int iVar4;
  undefined2 *puVar5;
  byte local_c24 [256];
  undefined2 local_b24 [384];
  int *local_824;
  byte *local_820;
  undefined2 *local_81c;
  int local_818;
  char local_812;
  undefined1 local_811;
  int local_804;
  int local_800 [511];
  
  if (param_1[2] < 2) {
    local_811 = 0;
  }
  else {
    *(undefined1 *)(param_1 + 4) = 1;
    local_811 = 1;
    (**(code **)(*param_1 + 0x10))(param_1,&local_804);
    FUN_0051a650(0,param_1[2] + -1);
    iVar1 = param_1[2];
    iVar4 = extraout_EDX;
    if (-1 < iVar1 + -1) {
      iVar4 = 0;
      piVar2 = local_800;
      do {
        if (iVar4 != *piVar2) break;
        iVar4 = iVar4 + 1;
        piVar2 = piVar2 + 2;
        iVar1 = iVar1 + -1;
      } while (iVar1 != 0);
    }
    iVar1 = param_1[2];
    if (iVar4 != iVar1) {
      if (-1 < iVar1 + -1) {
        bVar3 = 0;
        piVar2 = local_800;
        do {
          local_c24[*piVar2] = bVar3;
          bVar3 = bVar3 + 1;
          piVar2 = piVar2 + 2;
          iVar1 = iVar1 + -1;
        } while (iVar1 != 0);
      }
      (**(code **)(*param_1 + 0x14))(param_1,local_c24);
      local_812 = '\0';
      local_818 = param_1[2];
      FUN_00402a04(param_1[1],local_b24,local_818 * 3);
      iVar1 = param_1[2];
      if (-1 < iVar1 + -1) {
        iVar4 = 0;
        local_81c = local_b24;
        local_820 = local_c24;
        local_824 = &local_804;
        do {
          puVar5 = (undefined2 *)(param_1[1] + (uint)*local_820 * 3);
          *puVar5 = *local_81c;
          *(undefined1 *)(puVar5 + 1) = *(undefined1 *)(local_81c + 1);
          if ((*local_824 == 0) && (local_812 == '\0')) {
            local_812 = '\x01';
            local_818 = iVar4;
          }
          iVar4 = iVar4 + 1;
          local_824 = local_824 + 2;
          local_820 = local_820 + 1;
          local_81c = (undefined2 *)((int)local_81c + 3);
          iVar1 = iVar1 + -1;
        } while (iVar1 != 0);
      }
      param_1[2] = local_818;
      (**(code **)(*param_1 + 0x1c))();
    }
  }
  return local_811;
}

