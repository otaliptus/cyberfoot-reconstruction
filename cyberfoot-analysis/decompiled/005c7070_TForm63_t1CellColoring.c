// Address: 005c7070
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void TForm63_t1CellColoring
               (int param_1,undefined4 param_2,undefined4 param_3,byte param_4,undefined4 param_5,
               undefined4 *param_6,int param_7)

{
  undefined1 *puVar1;
  int iVar2;
  undefined4 *in_FS_OFFSET;
  bool bVar3;
  undefined4 uStack_1c;
  undefined1 *puStack_18;
  undefined1 *puStack_14;
  undefined4 local_8;
  
  puStack_14 = &stack0xfffffffc;
  local_8 = 0;
  puStack_18 = &LAB_005c70e6;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  iVar2 = (**(code **)(**(int **)(param_1 + 0x2f8) + 0x11c))();
  if ((param_7 < iVar2) && ((param_4 & 8) == 0)) {
    (**(code **)(**(int **)(param_1 + 0x2f8) + 0x100))
              (*(int **)(param_1 + 0x2f8),2,param_7,&local_8);
    bVar3 = true;
    FUN_00405378(local_8);
    if (bVar3) {
      *param_6 = 
      "yToken=\"6595b64144ccf1df\"\r\n        language=\"*\"\r\n        processorArchitecture=\"*\"/>\r\n    </dependentAssembly>\r\n  </dependency>\r\n</assembly>\r\n"
      ;
    }
  }
  puVar1 = puStack_14;
  *in_FS_OFFSET = uStack_1c;
  puStack_14 = &LAB_005c70ed;
  puStack_18 = (undefined1 *)0x5c70e5;
  FUN_00404ff0(&local_8,uStack_1c,puVar1);
  return;
}

