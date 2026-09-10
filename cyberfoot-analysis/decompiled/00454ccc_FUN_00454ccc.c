// Address: 00454ccc
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00454ccc(int param_1,int param_2)

{
  undefined4 uVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 uStackY_38;
  undefined1 *puStackY_34;
  undefined1 *puVar4;
  undefined1 *puVar5;
  
  puVar4 = &stack0xfffffffc;
  puVar5 = &stack0xfffffffc;
  if (param_2 != 0) {
    puStackY_34 = (undefined1 *)0x454ce1;
    uVar1 = FUN_00454bd4(param_2);
    if (*(int *)(param_1 + 0x254) == 0) {
      puStackY_34 = (undefined1 *)0x454d61;
      uVar3 = FUN_00454bc8(param_1);
      puStackY_34 = (undefined1 *)0x454d70;
      FUN_004673cc(param_1,0x413,uVar3);
    }
    else {
      FUN_00454bc8(param_1,0,puVar4);
      puStackY_34 = (undefined1 *)0x454da3;
      FUN_004673cc(param_1,0x42e,0);
      if (*(HGDIOBJ *)(param_1 + 0x254) != (HGDIOBJ)0x0) {
        puStackY_34 = (undefined1 *)0x454db6;
        DeleteObject(*(HGDIOBJ *)(param_1 + 0x254));
      }
    }
    *(undefined4 *)(param_1 + 0x254) = uVar1;
    return;
  }
  piVar2 = (int *)FUN_0042fcb8(PTR_PTR_00429378,1);
  puStackY_34 = &LAB_00454d36;
  uStackY_38 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStackY_38;
  (**(code **)(*piVar2 + 8))(piVar2,*(undefined4 *)(param_1 + 0x250));
  FUN_00431788(piVar2);
  *in_FS_OFFSET = uStackY_38;
  puStackY_34 = (undefined1 *)0x454d35;
  FUN_00403a84(piVar2,uStackY_38,puVar5);
  return;
}

