// Address: 00473dd8
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00473dd8(int param_1,undefined4 param_2,int param_3)

{
  undefined4 uVar1;
  int *piVar2;
  undefined4 uVar3;
  HBITMAP pHVar4;
  HBITMAP pHVar5;
  HIMAGELIST himl;
  undefined4 *in_FS_OFFSET;
  undefined4 uVar6;
  undefined1 *puVar7;
  undefined4 uStack_28;
  undefined1 *puStack_24;
  undefined1 *puStack_20;
  
  puVar7 = &stack0xfffffffc;
  puStack_20 = (undefined1 *)0x473df3;
  uVar1 = FUN_0042fcb8(PTR_PTR_00429378,1);
  puStack_24 = &LAB_00473ed7;
  uStack_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_28;
  if ((*(char *)(param_1 + 0x41) != '\0') && (param_3 != -1)) {
    puStack_20 = &stack0xfffffffc;
    piVar2 = (int *)FUN_0042fcb8(PTR_PTR_00429378,1);
    uVar6 = *in_FS_OFFSET;
    *in_FS_OFFSET = &stack0xffffffcc;
    (**(code **)(*piVar2 + 8))(piVar2,param_2);
    FUN_004313f8(piVar2,param_3);
    FUN_00473a04(param_1);
    uVar3 = (**(code **)(*piVar2 + 0x68))();
    pHVar4 = (HBITMAP)FUN_00473bc0(param_1,uVar3);
    pHVar5 = (HBITMAP)FUN_00473be0(param_1,param_2,uVar1);
    ImageList_Add(*(HIMAGELIST *)(param_1 + 0x3c),pHVar5,pHVar4);
    *in_FS_OFFSET = uVar6;
    FUN_00403a84(piVar2,uVar6,puVar7);
    return;
  }
  pHVar5 = (HBITMAP)0x0;
  puStack_20 = &stack0xfffffffc;
  pHVar4 = (HBITMAP)FUN_00473be0(param_1,param_2,uVar1);
  himl = (HIMAGELIST)FUN_00473bd0(param_1);
  ImageList_Add(himl,pHVar4,pHVar5);
  puVar7 = puStack_20;
  *in_FS_OFFSET = uStack_28;
  puStack_20 = &LAB_00473ede;
  puStack_24 = (undefined1 *)0x473ed6;
  FUN_00403a84(uVar1,uStack_28,puVar7);
  return;
}

